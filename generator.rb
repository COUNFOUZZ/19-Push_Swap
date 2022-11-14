# By Bgenie !

min = ARGV[0].to_i
max = ARGV[1].to_i
n = ARGV[2].to_i

abort("BAD ARGUMENT") if ARGV.size != 3

numbers = Array.new
n.times do
	nb = rand(min..max)
	while numbers.include? nb
		nb = rand(min..max)
	end
	numbers.push(nb)
end

str = String.new
numbers.shuffle!.each { |n|
	str += n.to_s + " "
}

puts str.chomp(" ")