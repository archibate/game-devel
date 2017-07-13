#!/usr/bin/env ruby
#
# - game.rb
#
#   Game Main Program
#

require 'gosu'

require File.join File.dirname(__FILE__) + '/lib', 'veclass'
require File.join File.dirname(__FILE__) + '/lib', 'math'

SimluationType = 'lake'

GravityConst = 10000.0
CursorText=nil#'NH4ClO4'
RocketMass = 12.0
RocketAcclerate = 21.60
RocketFueldown = 0#0.3 / RocketAcclerate
RocketLunchMassive = 0.01
RocketLunchFrequence = 0.0009/RocketLunchMassive * 2
SmartReactFrequence = RocketLunchFrequence * 5
RocketLunchVelocity = 1000.0
RocketLunchHurtness = 1.0
RocketRadarWeakness = 10.0
RocketHurtness = 0.00001
if SimluationType == 'sushiplate' then
	# simulate on the sushiplate :)
	WindowWidth, WindowHeight = 640, 480
	WindowFullscreen = false
	Background = 'resource/sushiplate_640x480.jpg'
	Bounceness = 0.6
	#Slowdown = 0.95
	AirnessKd = 0.8
	GravityDown = 0#180.0 * GravityConst
	#RocketAcclerate = 0.5 * GravityDown
	Turnspeed = 4.5*60
elsif SimluationType == 'space' then
	# simulate the real space, dangerous
	WindowWidth, WindowHeight = 1920, 1080
	WindowFullscreen = true
	Background = 'resource/galaxy_1920x1080.jpg'
	Bounceness = 1
	#Slowdown = 1
	AirnessKd = 0
	GravityDown = 0
	#RocketAcclerate = 0.2 * GravityDown
	Turnspeed = 4.5*60
elsif SimluationType == 'space-small' then
	# simulate the real space, dangerous
	WindowWidth, WindowHeight = 800, 600
	WindowFullscreen = true
	Background = 'resource/galaxy_1920x1080.jpg'
	Bounceness = 1
	#Slowdown = 1
	AirnessKd = 0
	GravityDown = 0
	#RocketAcclerate = 0.2 * GravityDown
	Turnspeed = 4.5*60
elsif SimluationType == 'lake' then
	# simulate on the lake, floating
	WindowWidth, WindowHeight = 1024, 768
	WindowFullscreen = false
	Background = 'resource/paltanen_1024x768.jpg'
	Bounceness = 0.5
	#Slowdown = 0.98
	AirnessKd = 0.8
	GravityDown = 180.0 * GravityConst
	#RocketAcclerate = 0.4 * GravityDown
	Turnspeed = 4.0*60
end

$gravector = Vec2d.new(0.0, GravityDown)

#SlowdownK = Slowdown**60

def better_angle a
	a = (a) % (2*Math::PI)
	if a >= Math::PI then -a else a end
end

def add_rand_ball_to balls
	#@r_pos = Vec2d.new @@RandDist, @@RandDist
	def randpos
		#@r_pos.x += @@RandDist
		#if @r_pos.x > WindowWidth - @@RandDist then
			#@r_pos.x = @@RandDist
			#@r_pos.y += @@RandDist
		#end
		#if @r_pos.y > WindowHeight - @@RandDist then
			#puts "randpos: out of window!"
		#end
		#return Vec2d.new @r_pos.x, @r_pos.y
		return Vec2d.new Gosu::random(0, WindowWidth), Gosu::random(0, WindowHeight)
	end

	def randvel
		return Vec2d.new Gosu::random(-800, 800), Gosu::random(-800, 800)
	end

	balls.push Ball.new(:pos => randpos, :vel => randvel, :mass => 10)
end

class ElementI

	attr_accessor :pos, :vel, :mass

	def initialize pos, vel, mass
		@pos, @vel, @mass = pos, vel, mass
	end

	def to_s
		"$#{@mass}@#{@pos}+#{@vel}"
	end

	def warp_if_need
		#return if true
		if @pos.x < 0 or @pos.x >= WindowWidth then
			@vel.x = -@vel.x * Bounceness
		end
		if @pos.y < 0 or @pos.y >= WindowHeight then
			@vel.y = -@vel.y * Bounceness
		end

		@pos = warped_pos @pos, true
	end

	def move dt, force = Vec2d.new
		self.moveforce dt, force
		self.warp_if_need
	end

	def moveforce dt, force = Vec2d.new
		self.movedv dt, if @mass != 0 then force / @mass else Vec2d.new end
	end

	def movedv dt, dv = Vec2d.new
		dv *= dt / 2
		@vel += dv
		@pos += @vel * dt
		@vel += dv
	end

	def warped_pos pos = Vec2d.new(@pos.x, @pos.y), wbon = nil
		if wbon == true then
			if @pos.x < $win_orig.x then
				pos.x = $win_orig.x
			elsif @pos.x >= $win_orig.x + WindowWidth then
				pos.x = $win_orig.x + WindowWidth - 1
			end
			if @pos.y < $win_orig.y then
				pos.y = $win_orig.y
			elsif @pos.y >= $win_orig.y + WindowHeight then
				pos.y = $win_orig.y + WindowHeight - 1
			end
			pos
		elsif wbon == false then
			pos = pos - $win_orig
			Vec2d.new pos.x % WindowWidth, pos.y % WindowHeight
		else
			pos
		end
	end
end

class Element < ElementI
	def initialize physopts = {}
		super physopts[:pos], physopts[:vel], physopts[:mass]
	end
end

class BallElement < Element

	attr_accessor :radius, :bounceness, :ness_ks, :ness_kd

	def initialize physopts = {}
		super physopts
		@bounceness = physopts[:bounceness]
		@bounceness = 8.0 if @bounceness == nil
		@ness_ks = physopts[:ness_ks]
		@ness_ks = 0 if @ness_ks == nil
		@ness_kd = physopts[:ness_kd]
		@ness_kd = 0 if @ness_kd == nil
		@_new_force = Vec2d.new
	end

	def move time_passed, force = Vec2d.new
		super time_passed, @_new_force + force
		@_new_force = Vec2d.new
	end

	def acceleration force
		#puts "acceleration #{force}"###
		@_new_force += force
	end

	def old_check_balls balls
		for ball in balls do
			next if ball == self
			distance = ball.pos - self.pos
			if distance.length < ball.radius + self.radius then
				next if @bouncing_balls.include? ball
				@bouncing_balls <<= ball
				self.bounce_with ball
			else
				@bouncing_balls.delete ball if @bouncing_balls.include? ball
			end
		end
	end

	def old_bounce_with ball, raw_angle
		veldif = ball.vel - self.vel
		reflact = Vec2d.new(1.0, 0.0).rotate_to raw_angle
		#a = better_angle veldif.angle - raw_angle
		#a = -a if a < 0
		#return if a == Math::PI/2
		#reflact = -reflact if a < Math::PI/2
		#oldvel = Vec2d.new veldif.x, veldif.y
		veldif.dot_rot! reflact
		#puts "#{reflact} #{oldvel} #{veldif}"
		#ball.vel -= veldif# / ball.mass * self.mass
		self.acceleration veldif * 2 * self.mass# / self.mass * ball.mass
	end

	def check_balls balls
		#self.acceleration self.fd_with balls[0]
		for ball in balls do
			next if ball.pos == nil
			next if (ball.pos - self.pos).length == 0
			#self.acceleration self.fs_with ball
			#self.acceleration self.fd_with ball
			#self.acceleration self.fg_with ball
		end
		#self.acceleration $gravector * self.mass
	end

	def fg_with ball
		m1 = ball.mass#千克
		s = ball.pos - self.pos#米!
		r = s.length#米
		g = s * m1 * GravityConst / r**3
		g * self.mass
	end

	def fs_with ball
		r0 = 100.0#米
		ks = ball.ness_ks * self.ness_ks#牛/米
		s = ball.pos - self.pos#米!
		r = s.length#米
		fs = (r - r0) * ks
		s.normalize * fs
	end

	def fd_with ball
		kd = ball.ness_kd * self.ness_kd#牛*秒/米
		v0 = self.vel#米!/秒
		v1 = ball.vel#米!/秒
		(v1 - v0) * kd
	end

	def bounce_with ball
		dis = ball.pos - self.pos
		distance = dis.length
		radiusum = ball.radius + self.radius
		bouncdis = radiusum - distance
		return unless bouncdis > 0 and distance != 0
		bounceness = self.bounceness * ball.bounceness# * ball.mass * 100
		force = dis.normalize * bouncdis
		force *= bounceness
		#force = dis.normalize * (bouncdis / distance) * bounceness
		ball.acceleration force
		#force = -force
		#self.acceleration force
	end

	def check_balls_again balls, time_passed
	end
end

module DrawPosElementM

	attr_reader :image

	def _draw zidx, angle = 0
		pos = self.warped_pos
		self.image.draw_rot(pos.x, pos.y, zidx, angle)
	end

	def draw zidx = 1
		self._draw zidx
	end
end

class Ball < BallElement

	attr_accessor :radius

	def initialize physopts = {}
		super physopts
		@radius = physopts[:radius]
		@radius = 10 if @radius == nil
		@image = Gosu::Image.new($window, 'resource/ball_40x40.png', false) if @radius == 20
		@image = Gosu::Image.new($window, 'resource/ball_20x20.png', false) if @radius == 10
		@image = Gosu::Image.new($window, 'resource/enemy_30x30.png', false) if @radius == 15
		@image = Gosu::Image.new($window, 'resource/bullet_red_10x10.png', false) if @radius == 6
		@image = Gosu::Image.new($window, 'resource/bullet_blue_10x10.png', false) if @radius == 5
	end

	def to_s
		"Ball" + super
	end

	include DrawPosElementM
end

class Rocket < BallElement

	attr_accessor :angle, :accelerating, :radius, :radar_radius
	attr_reader :health, :score

	def initialize pos = Vec2d.new(WindowWidth / 2.0, WindowHeight / 2.0),
		vel = Vec2d.new(0.0, 0.0), mass = RocketMass, angle = 0.0,
		radius = 30, radar_radius = radius * 3, health_orig = 100.0, lunch_radius = 6
		@radius = radius
		@radar_radius = radar_radius
		@lunch_radius = lunch_radius
		super :pos => pos, :vel => vel, :mass => mass, :bounceness => 500
		@angle = angle
		@image = Gosu::Image.new($window, 'resource/rocket_20x80.png', false)
		@image_radar = Gosu::Image.new($window, 'resource/radar_o22_120x120.png', false)
		@image_acc = Gosu::Image.new($window, 'resource/rocket_acc_20x80.png', false)
		@image_health_dark = Gosu::Image.new($window, 'resource/health_dark_80x20.png', false)
		@image_health = Gosu::Image.new($window, 'resource/health_80x20.png', false)

		@health = @health_orig = health_orig
		@accelerating = false
		@score = 0

		#self.refresh_image_radar_now
		self.refresh_health_image
	end

	def to_s
		"S#{@score}$#{@mass.to_i}@#{@pos._om(lambda {|x| x.to_i})}+#{@vel._om(lambda {|x| x.to_i})}>#{@angle.to_i}#{if @accelerating then 'A' else 'a' end}"
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

	def fire_accelerate
		return Vec2d.new unless @accelerating

		acc_x = Gosu::offset_x @angle, RocketAcclerate
		acc_y = Gosu::offset_y @angle, RocketAcclerate
		return Vec2d.new(acc_x, acc_y)
	end

	def lunch_ball_to balls
		mass = @mass * RocketLunchMassive
		velvec = Vec2d.new(1.0, 0.0).rotate_to(Math::PI/180*(@angle-90))
		vel = @vel + velvec * RocketLunchVelocity
		radius = if @radar_radius > @radius then @radar_radius else @radius end
		pos = self.pos + velvec * (radius * 1.08)
		physopts = { :pos => pos, :vel => vel, :mass => mass, :radius => @lunch_radius }
		ball = self.decombine_ball physopts

		def ball.check_balls_again balls, time_passed
			super balls, time_passed

			init_age = 0.5 if @radius == 5
			init_age = 1.5 if @radius == 6
			@age = init_age if @age == nil
			@age -= time_passed
			balls.delete self if @age <= 0

			for ball in balls do
				next if ball.pos == nil
				distance = ball.pos - self.pos
				distance = distance.length
				next if distance == 0
				if distance <= ball.radius + self.radius then
					#puts "fired at #{ball}"###
					# E = 1/2*mv^2
					eng = (self.vel - ball.vel).length**2 * self.mass / 2
					ball.hurt_energy eng if ball.respond_to? 'hurt_energy'
				end
			end
		end

		balls.push ball
	end

	def warp_if_need
		#if @pos.x < $win_orig.x then
			#$win_orig.x = @pos.x
		#end
		#if @pos.y < $win_orig.y then
			#$win_orig.y = @pos.y
		#end
		#win_size = Vec2d.new(WindowWidth, WindowHeight)
		#win_end = $win_orig + win_size
		#if @pos.x >= win_end.x then
			#$win_orig.x = @pos.x - win_size.x - 2
		#end
		#if @pos.y >= win_end.y then
			#$win_orig.y = @pos.y - win_size.y - 2
		#end
		super

		@angle %= 360
	end

	def image
		unless @accelerating then @image else @image_acc end
	end

	def hurt_energy energy
		#puts "#{self}: health -#{energy * RocketHurtness}"##
		@health -= energy * RocketHurtness
		#puts "#{self}: health now is #{@health}"
		puts "#{self}: die out!" if @health <= 0
	end

	def bounce_with ball
		super ball
		#self.old_bounce_with ball, @angle
	end

	def combine_with ball
		mov = @vel * @mass + ball.vel * ball.mass
		@mass += ball.mass
		@vel = mov / @mass
	end

	def decombine_ball physopts
		ball = Ball.new physopts
		mov = @vel * @mass - ball.vel * ball.mass
		@mass -= ball.mass
		@vel = mov / @mass
		return ball
	end

	def check_balls_again balls, time_passed
		if @health <= 0 then
			balls.delete self
			return
		end

		for ball in balls
			radar_radius = self.radar_radius
			next if ball.pos == nil
			next if ball.pos == self.pos
			if (ball.pos - self.pos).length < radar_radius then
				#puts "combine_with #{ball}"##
				self.radar_eat_with ball, balls
				##bug:add_rand_ball_to balls
			end
		end

		self.do_fire_accelerate time_passed
	end

	def radar_eat_with ball, balls
		self.combine_with ball
		balls.delete ball#
		veldif = ball.vel - self.vel
		#puts "#{self}: radar_eat #{ball.mass * veldif.length ** 0.5 * RocketRadarWeakness}"##
		@radar_radius -= ball.mass * veldif.length ** 0.5 * RocketRadarWeakness
		#self.refresh_image_radar_now
	end

	#def refresh_image_radar_now
		#@image_radar_now = @image_radar#.subimage((@image_radar.width / 2.0 - @radar_radius).to_i+1, (@image_radar.height / 2.0 - @radar_radius).to_i-1, (@image_radar.width / 2.0 + @radar_radius).to_i+1, (@image_radar.height / 2.0 + @radar_radius).to_i-1)
	#end

	def do_fire_accelerate time_passed
		facc = self.fire_accelerate
		@mass -= facc.length * RocketFueldown * @mass * time_passed
		@vel += facc
	end

	def refresh_health_image
		i = @image_health.width * @health / @health_orig
		i = i.to_i
		if i > 0 then
			@image_health_now = @image_health.subimage(0, 0, i, @image_health.height)
		else
			@image_health_now = @image_health_dark
		end
	end

	##
	include DrawPosElementM
	def draw zidx = 2
		self.refresh_health_image
		self._draw zidx + 0.02, @angle
		pos = self.warped_pos
		@image_radar.draw_rot pos.x, pos.y, zidx + 0.01, 0 if @radar_radius > @radius * 1.5

		pos = @pos #self.warped_pos @pos, true
		pos += Vec2d.new(-@image_health_dark.width / 2, @radius * 2)
		@image_health_dark.draw pos.x, pos.y, zidx + 0.03
		@image_health_now.draw pos.x, pos.y, zidx + 0.035
	end
	##

	p %q@w@

	#if SlowdownK != nil then force += @vel*SlowdownK*dt else @vel *= Slowdown end
	#@vel *= Slowdown ** (60*dt)
	#
	# cause         a = dv/dt
	#
	# because       dv = -kvdt
	# so that       a = -k
	#
end

class Enemy < Rocket
	def initialize pos = Vec2d.new(WindowWidth / 2.0, WindowHeight / 2.0),
		vel = Vec2d.new(0.0, 0.0), mass = RocketMass / 10, angle = 0.0,
		radius = 15, radar_radius = 10, health_orig = 10.0, lunch_radius = 5
		super pos, vel, mass, angle, radius, radar_radius, health_orig, lunch_radius

		@image = Gosu::Image.new($window, 'resource/enemy_30x30.png', false)
		@image_acc = Gosu::Image.new($window, 'resource/enemy_acc_30x30.png', false)
		@accelerating = false
		@smart_time = SmartReactFrequence
	end

	def check_balls_again balls, time_passed
		@smart_time += time_passed
		while @smart_time >= SmartReactFrequence do
			@smart_time -= SmartReactFrequence
			self.smart_accel balls
		end

		super balls, time_passed
	end

	def smart_accel balls
		@accelerating = false
		acc = Vec2d.new 0.0, 0.0
		acc1 = Vec2d.new 0.0, 0.0
		acc2 = Vec2d.new 0.0, 0.0
		for ball in balls do
			next if ball.pos == nil
			dis = ball.pos - self.pos
			vel = ball.vel - self.vel
			a = better_angle (-dis).angle - vel.angle
			a = -a if a < 0
			next if dis.length == 0
			next unless dis.length <= 180.0


			if ball.respond_to? 'smart_accel' then
				acc2 += vel / dis.length
			end
			if ball.respond_to? 'lunch_ball_to' then
				acc -= dis * if a < Math::PI/2 then vel.length * 0.1 else 1.0 end / dis.length**2
			else
				acc1 -= dis * if a < Math::PI/2 then vel.length * 0.1 else 1.0 end / dis.length**2
			end
		end
		acc += acc1 * 0.10
		#acc1 *= 0.10
		acc2 *= 0.04
		if acc.length != 0 then
			@angle = -90+180/Math::PI*acc.angle
			@accelerating = false
			self.lunch_ball_to balls
		#elsif acc1.length >= 0.05 then
			#@angle = -90+180/Math::PI*acc1.angle
			#@accelerating = false
			#self.lunch_ball_to balls
		elsif acc2.length >= 0.1 then
			@angle = 90+180/Math::PI*acc2.angle
			@accelerating = true
		end
	end

	def fire_accelerate
		return Vec2d.new unless @accelerating

		acc_x = Gosu::offset_x @angle, RocketAcclerate
		acc_y = Gosu::offset_y @angle, RocketAcclerate
		return Vec2d.new(acc_x, acc_y)
	end

	def lunch_ball_to balls
		super balls
		@angle += 8
		super balls
		@angle -= 16
		super balls
		@angle += 8
	end
end

class GameWindow < Gosu::Window

	#@@RandDist = 160

	def initialize width = WindowWidth, height = WindowHeight, fullscreen = WindowFullscreen
		super width, height, fullscreen, 1000/100
		self.caption = 'Rocket Game'

		$window = self

		@background_image = Gosu::Image.new $window, Background, true
		#@cursor_image = Gosu::Image.new self, 'resource/mousecursor.png', false
		@cursor_image = if CursorText != nil then Gosu::Image.from_text CursorText, 40 else Gosu::Image.new self, 'resource/mousecursor.png', false end
		@rocket = Rocket.new

		@air = Element.new(:pos => nil, :vel => Vec2d.new, :mass => 0)
		def @air.draw _ = 0
		end
		def @air.ness_ks
			0
		end
		def @air.ness_kd
			AirnessKd
		end

		@balls = [@air]
		@balls.push @rocket
		@balls.push Enemy.new @rocket.pos + Vec2d.new(200, 0)
		@balls.push Enemy.new @rocket.pos + Vec2d.new(-200, 0)
		@balls.push Enemy.new @rocket.pos + Vec2d.new(200, 200)
		@balls.push Enemy.new @rocket.pos + Vec2d.new(-200, 200)
		@balls.push Enemy.new @rocket.pos + Vec2d.new(0, 200)
		@balls.push Enemy.new @rocket.pos + Vec2d.new(0, -200)
		@balls.push Enemy.new @rocket.pos + Vec2d.new(200, -200)
		@balls.push Enemy.new @rocket.pos + Vec2d.new(-200, -200)
		num = 0#((WindowWidth - @@RandDist) * (WindowHeight - @@RandDist) / @@RandDist / @@RandDist)
		num.to_i.times do add_rand_ball_to @balls end
		#@balls.push Ball.new(:pos => @rocket.pos - Vec2d.new(50, 86), :vel => Vec2d.new(0, 0), :mass => 0.4)
		#@balls.push Ball.new(:pos => @rocket.pos - Vec2d.new(-50, 86), :vel => Vec2d.new(0, 0), :mass => 0.4)
		#@balls.push Ball.new(:pos => @rocket.pos, :vel => Vec2d.new(0, 0), :mass => 80)
		#@rocket.pos += Vec2d.new 200, 0
		#@rocket.vel += Vec2d.new 0, -180

		@last_time = 0.0
		@accelerate = 0
		@lunching = 0
		@lunching_time = RocketLunchFrequence
		@show_delay = 4
		$win_orig = Vec2d.new 0.0, 0.0

		@mouse_angle = 0.0

		if @cursor_image == nil then
			def self.turn_if_need time_passed
				@rocket.turn_left time_passed if button_down? Gosu::KbLeft or button_down? Gosu::GpLeft
				@rocket.turn_right time_passed if button_down? Gosu::KbRight or button_down? Gosu::GpRight
			end
		else
			def self.turn_if_need time_passed
				mouse = Vec2d.new mouse_x, mouse_y
				mouse += $win_orig
				@rocket.angle = 180/Math::PI*(mouse - @rocket.pos).angle + 90

				$gravector.rotate!(1 * time_passed) if button_down? Gosu::KbLeft or button_down? Gosu::GpLeft
				$gravector.rotate!(-1 * time_passed) if button_down? Gosu::KbRight or button_down? Gosu::GpRight
			end
		end

		def @rocket.lunch_ball_to balls
			super balls
			@angle += 5
			super balls
			@angle -= 10
			super balls
			@angle += 5
		end

		#def self.turn_if_need time_passed
			#mouse = @balls[2].pos
			#mouse += $win_orig
			#@rocket.angle = 180/Math::PI*(mouse - @rocket.pos).angle + 160
			#@rocket.accelerating = if @accelerate > 0 then true else false end
		#end

		self.update
	end

	def do_time_tick
		time_passed = -@last_time
		@last_time = Gosu.milliseconds / 1000.0
		time_passed += @last_time
	end

	def update
		time_passed = self.do_time_tick

		@show_delay -= 1
		while @show_delay <= 0 do
			self.caption = 'Rocket Game ' + @rocket.to_s
			@show_delay += 10
		end

		self.turn_if_need time_passed

		@rocket.accelerating = if @accelerate > 0 then true else false end

		for ball in @balls.drop 1 do ball.check_balls @balls end
		for ball in @balls.drop 1 do ball.move time_passed end
		for ball in @balls.drop 1 do ball.check_balls_again @balls, time_passed end

		if @lunching > 0 then
			@lunching_time += time_passed
			while @lunching_time >= RocketLunchFrequence do
				@lunching_time -= RocketLunchFrequence
				@rocket.lunch_ball_to @balls
			end
		else
			@lunching_time = RocketLunchFrequence
		end
	end

	def button_down(id)
		exit if id == Gosu::KbEscape
		@accelerate += 1 if id == Gosu::KbUp or id == Gosu::GpButton0 or id == 256
		@lunching += 1 if id == Gosu::KbSpace or id == Gosu::GpButton1 or id == 258
	end

	def button_up(id)
		@accelerate -= 1 if id == Gosu::KbUp or id == Gosu::GpButton0 or id == 256
		@lunching -= 1 if id == Gosu::KbSpace or id == Gosu::GpButton1 or id == 258
	end

	def draw
		@cursor_image.draw_rot mouse_x, mouse_y, 3, @mouse_angle if @cursor_image != nil

		for x in @balls do x.draw end
		@background_image.draw 0, 0, 0
	end
end

window = GameWindow.new
window.show
