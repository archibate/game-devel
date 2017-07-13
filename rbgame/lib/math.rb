module Mathematic

	# interger-prefer math

	def self.max a, b
		if a > b then a else b end
	end

	def self.min a, b
		if a < b then a else b end
	end

	def self.abs a
		if a > 0 then a else -a end
	end

	# float-prefer math

	def self.sqrt(x, precious=0.000000001)
		curr_guess = x.to_f
		loop do
			last_guess = curr_guess
			curr_guess = (last_guess + x / last_guess) / 2
			if abs(last_guess - curr_guess) < precious then
				return curr_guess
			end
		end
	end
end

#p Mathematic.sqrt 10.0
