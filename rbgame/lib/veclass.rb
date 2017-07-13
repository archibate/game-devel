#!/usr/bin/env ruby
#
# - veclass.rb
#
#   2D Vector Class Library
#
#   should be useful in game programming!
#

def vector2 xopr = [0, 0], y = nil
	Vec2d.new xopr, y
end

class Vec2d

	attr_accessor :x, :y, :length, :angle

	def initialize x_or_pair = [0, 0], y = nil
		if y == nil then
			@x, @y = x_or_pair[0], x_or_pair[1]
		else
			@x, @y = x_or_pair, y
		end
	end

	def to_s
		"(#{@x}, #{@y})"
	end

	def length
		Math::sqrt @x**2 + @y**2
	end

	def length= length
		self.mul! length / self.length
	end

	def normalize
		self / length
	end

	def normalize!
		self.div! length
	end

	def dot other
		angle = other.angle - self.angle
		self.length * other.length * Math::cos(angle)
	end

	def dot_angle_to angle
		self.length * Math::cos(angle)
	end

	def dot_angle other_angle
		self.dot_angle_to other_angle - self.angle
	end

	def dot_rot! other
		self.dot_rot_angle! other.angle
		self.mul! other.length
	end

	def dot_rot_angle! other_angle
		angle = other_angle - self.angle
		self.rotate_to! other_angle
		self.mul! Math::cos(angle)
	end

	def _o2 ofun, other
		self.class.new(ofun(@x, other.x), ofun(@y, other.y))
	end

	def _o2! ofun, other
		@x = ofun(@x, other.x)
		@y = ofun(@y, other.y)
	end

	def _os ofun, scale
		self.class.new(ofun.(@x, scale), ofun.(@y, scale))
	end

	def _os! ofun, scale
		@x = ofun.(@x, scale)
		@y = ofun.(@y, scale)
	end

	def _om ofun
		self.class.new(ofun.(@x), ofun.(@y))
	end

	def _om! ofun
		@x = ofun.(@x)
		@y = ofun.(@y)
	end

	def add! other
		@x += other.x
		@y += other.y
	end

	def sub! other
		@x -= other.x
		@y -= other.y
	end

	def mul! scale
		@x *= scale
		@y *= scale
	end

	def div! scale
		@x /= scale
		@y /= scale
	end

	def + other
		self.class.new(@x + other.x, @y + other.y)
	end

	def - other
		self.class.new(@x - other.x, @y - other.y)
	end

	def * scale
		self.class.new(@x * scale, @y * scale)
	end

	def / scale
		self.class.new(@x / scale, @y / scale)
	end

	def -@
		self.class.new(-@x, -@y)
	end

	def angle
		Math::atan2 @y, @x
	end

	def angle= angle
		r = self.length
		@x = r * Math::cos(angle)
		@y = r * Math::sin(angle)
	end

	def rotate_to! angle
		self.angle = angle
	end

	def rotate! angle
		self.angle += angle
	end

	def rotate_to angle
		angle += self.angle
		r = self.length
		self.class.new r * Math::cos(angle), r * Math::sin(angle)
	end

	def rotate angle
		self.rotate_to_angle self.angle + angle
	end
end
