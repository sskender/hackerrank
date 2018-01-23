"""
input:
2 4 6 8 3

output:
2 4 6 8 8
2 4 6 6 8
2 4 4 6 8
2 3 4 6 8
"""

array = input().split()

for i in range( len(array) ):
    for j in range( len(array) - 1 , i , -1 ):
        if int( array[ j - 1 ] ) > int( array[ j ] ):

            right = array[ j ]
            left = array[ j - 1 ]

            array[ j ] = left
            print( " ".join(array) )
            array[ j - 1 ] = right
            
print( " ".join(array) )



"""
input:
1 4 3 5 6 2

output:
1 4 3 5 6 2
1 3 4 5 6 2
1 3 4 5 6 2
1 3 4 5 6 2
1 2 3 4 5 6
"""

array = input().split()

for i in range( 1 , len(array)):
    for j in range( i ):
        if int( array[ i ] ) < int( array[ j ] ):
            array[ i ], array[ j ] = array[ j ], array[ i ]

print( " ".join(array) )