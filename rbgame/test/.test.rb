hello = Proc.new do |name|
	puts "hello, #{name}"
end

prc1 = Proc.new do |a, b, c,|
	p [a, b, c]
end

hello.call("fwj")
prc1.call(1, 2)

def total2(from, to, &block)
	sum = 0
	from.upto(to) do |i|
		if block
			sum += block.call(i)
		else
			sum += i
		end
	end
	return sum
end

p total2(1, 10) {|i| i**2}

def counter
	c = 0
	Proc.new do |i|
		if not i then i = 1 end
		c += i
	end
end

c1 = counter
p c1.call(3, 2)
p c1.(2, 2)
p c1[4, 2]
p c1 === 4
