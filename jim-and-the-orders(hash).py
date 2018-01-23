orders = []

for testcase in range ( 1 , int(input()) + 1 ):
    a , b = map( int , input("").split() )
    orders.append( [ a + b , testcase ] )  
    
orders.sort()

for i in range ( len(orders) ):
    print( orders[ i ][ 1 ] , end = " " )