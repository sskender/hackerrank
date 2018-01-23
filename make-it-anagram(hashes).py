def make_it_anagram():
    a = input("")
    b = input("")

    deletions = 0
    deleted = []
    hash_a = {}
    hash_b = {}

    # dictionary from a
    for sign in a:
        if sign not in hash_a:
            hash_a[ sign ] = 1
        else:
            hash_a[ sign ] += 1

    # dictionary from b
    for sign in b:
        if sign not in hash_b:
            hash_b[ sign ] = 1
        else:
            hash_b[ sign ] += 1
             
    # delete extra from a
    for key in hash_a:
        
        if key not in hash_b:
            deletions += hash_a[ key ]
        
        # disable double counting
        elif key not in deleted:
            deletions += abs( hash_a[ key ] - hash_b[ key ] )
            deleted.append( key )

    # delete extra from b
    for key in hash_b:
        
        if key not in hash_a:
            deletions += hash_b[ key ]
        
        # disable double counting
        elif key not in deleted:
            deletions += abs( hash_a[ key ] - hash_b[ key ] )
            deleted.append( key )
            
    # result            
    print( deletions )


make_it_anagram()