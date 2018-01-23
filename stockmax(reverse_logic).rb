"""
Buy one share, sell everything or do nothing

INPUT:
3 		=> T test cases
3 		=> N number of integers in stock array, T1
5 3 2		=> stock array
3		=> N, T2
1 2 100	=> stock array
4		=> N, T3
1 3 1 2	=> stock array

OUTPUT:
0		=> read from end, last day sell, find the highest and sell all, else buy share
197
3
"""

T = Integer(gets.chomp)
N_array = []
array = []

for testcase in 0...T 					# don't include T
	N_array.push( Integer(gets.chomp) )	# number of integers
	array.push( gets.chomp.split(" ") )		# stock array
end


array.each do | item |	# item = [ 5, 3, 2 ]
	
	sell_price = 0		# return
	highest = 0		# highest stock
	i = item.length - 1 	# highest list index	
	print "i= "+i.to_s
	
	while i >= 0

		if ( item[ i ] ).to_i >= highest
			highest = ( item[ i ] ).to_i
		end

		sell_price += highest - ( item[ i ] ).to_i

		i -= 1
	end

	puts sell_price

end