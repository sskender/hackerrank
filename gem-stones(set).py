array = []
for i in range( int(input()) ):
	array.append( set(input("")) )

new = set( array[0] )
for item in range( 1 , len(array) ):
	new &= set( array[ item ] )

print ( len( new ) )