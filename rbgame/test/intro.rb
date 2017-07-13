module AnimalCommon
	def initialize name
		@name = name
	end

	def say_hello
		puts "#{@name} hello, I got #{self.leg_count} legs"
	end
end

module FourLegWorld
	class Animal
		def initialize _
			@name = "<unamed animal>"
		end

		def sleep
			puts "sleep"
			self.say_hello
		end

		def leg_count
			4
		end
	end
end

module TwoLegWorld
	class Animal < FourLegWorld::Animal
		include AnimalCommon

		def leg_count
			2
		end
	end
end

cat = FourLegWorld::Animal.new "pyb"
puts cat.leg_count
def cat.say_hello
	TwoLegWorld.say_hello self
end
cat.say_hello
tyw = TwoLegWorld::Animal.new "tyw"
tyw.say_hello
tyw.sleep
