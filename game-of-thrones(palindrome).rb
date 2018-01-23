# check if unsorted string can be palindrome
# create hash with repeating char values
# repeating characters must be steam, max one can be odd ( has to be in the middle )

array = gets.chomp.split("")
hash = {}

array.each do |item|
	if hash.has_key?(item) == false
		hash[ item ] = 1
	else
		hash[ item ] += 1
	end
end

number_of_odds = 0
hash.each do | x , y |
	if y % 2 == 1
		number_of_odds += 1
	end
end

if number_of_odds <= 1
	print "YES"
else
	print "NO"
end