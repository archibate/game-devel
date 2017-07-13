#!/usr/bin/env ruby
#
# - game.rb
#
#   Game Main Program
#

require 'gosu'

require File.join File.dirname(__FILE__) + '/lib', 'veclass'
require File.join File.dirname(__FILE__) + '/lib', 'math'

SimluationType = 'space'

if SimluationType == 'sushiplate' then
	# simulate on the sushiplate :)
	WindowWidth, WindowHeight = 640, 480
	WindowFullscreen = true
	Background = 'resource/sushiplate_640x480.jpg'
	Bounceness = 0.6
	Slowdown = 0.95
	Acclerate = 0.5
	Turnspeed = 4.5
elsif SimluationType == 'space' then
	# simulate the real space, dangerous
	WindowWidth, WindowHeight = 1920, 1080
	WindowFullscreen = true
	Background = 'resource/galaxy_1920x1080.jpg'
	Bounceness = 1
	Slowdown = 0
	Acclerate = 0.2
	Turnspeed = 4.5
elsif SimluationType == 'lake' then
	# simulate on the lake, floating
	WindowWidth, WindowHeight = 1024, 768
	WindowFullscreen = false
	Background = 'resource/paltanen_1024x768.jpg'
	Bounceness = 0.55
	Slowdown = 0.98
	Acclerate = 0.4
	Turnspeed = 4.0
end

SlowdownK = Slowdown**60
#SlowdownK = nil
Forcescale = 1800.0
Turnspeed = 240.0

class Rocket

	attr_accessor :pos, :vel, :mass

	def initialize window
		@image_normal = Gosu::Image.new(window, 'resource/rocket_20x80.png', false)
		@image_accelerating = Gosu::Image.new(window, 'resource/rocket_acc_20x80.png', false)
		@accelerating = false
		@pos = Vec2d.new WindowWidth / 2.0, WindowHeight / 2.0
		@vel = Vec2d.new 0.0, 0.0
		@mass = 1.0
		@angle = 0.0
		@score = 0
	end

	def warp pos
		@pos = pos
	end

	def turn_right dt
		self.turn_angle(Turnspeed * dt)
	end

	def turn_left dt
		self.turn_angle(-Turnspeed * dt)
	end

	def turn_angle angle
		@angle += angle
	end

	def accelerate_move dt
		acc_x = Gosu::offset_x @angle, Acclerate
		acc_y = Gosu::offset_y @angle, Acclerate
		acc = Vec2d.new(acc_x, acc_y) * Forcescale
		self.move dt, acc
		@accelerating = true
	end

	def warp_if_need
		if @pos.x < 0 then
			@pos.x = 0
			@vel.x = -@vel.x * Bounceness
		elsif @pos.x >= WindowWidth then
			@pos.x = WindowWidth
			@vel.x = -@vel.x * Bounceness
		end
		if @pos.y < 0 then
			@pos.y = 0
			@vel.y = -@vel.y * Bounceness
		elsif @pos.y >= WindowHeight then
			@pos.y = WindowHeight
			@vel.y = -@vel.y * Bounceness
		end
	end

	def move dt, force = Vec2d.new
		if SlowdownK != nil then force += @vel*SlowdownK*dt else @vel *= Slowdown end
		self.moveforce dt, force
		self.warp_if_need
		#@vel *= Slowdown ** (60*dt)
		#
		# cause         a = dv/dt
		#
		# because       dv = -kvdt
		# so that       a = -k
		#
		@accelerating = false
	end

	def moveforce dt, force = Vec2d.new
		self.movedv dt, force / @mass
	end

	def movedv dt, dv = Vec2d.new
		dv *= dt / 2
		@vel += dv
		@pos += @vel * dt
		@vel += dv
	end

	def image
		if not @accelerating then @image_normal else @image_accelerating end
	end

	def draw
		pos = Vec2d.new @pos.x % WindowWidth, @pos.y % WindowWidth
		self.image.draw_rot(pos.x, pos.y, 1, @angle)
	end
end

class GameWindow < Gosu::Window
	def initialize width = WindowWidth, height = WindowHeight, fullscreen = WindowFullscreen
		super width, height, fullscreen
		self.caption = 'Gosu Tutorial Game'

		@background_image = Gosu::Image.new(self, Background, true)
		@rocket = Rocket.new(self) 
		@last_time = 0
		@accelerate = false
		self.update
	end

	def do_time_tick
		time_passed = -@last_time
		@last_time = Gosu.milliseconds/1000.0
		time_passed += @last_time
	end

	def update
		time_passed = self.do_time_tick

		@rocket.turn_left time_passed if button_down? Gosu::KbLeft or button_down? Gosu::GpLeft
		@rocket.turn_right time_passed if button_down? Gosu::KbRight or button_down? Gosu::GpRight
		if @accelerate then
			@rocket.accelerate_move time_passed else @rocket.move time_passed end
	end

	def button_down(id)
		exit if id == Gosu::KbEscape
		@accelerate = true if id == Gosu::KbUp or id == Gosu::GpButton0
	end

	def button_up(id)
		@accelerate = false if id == Gosu::KbUp or id == Gosu::GpButton0
	end

	def draw
		@rocket.draw
		@background_image.draw(0, 0, 0)
	end
end

window = GameWindow.new
window.show
