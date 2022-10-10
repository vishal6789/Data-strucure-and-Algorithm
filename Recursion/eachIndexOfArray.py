def eachIndex(Arr,N,element):

    if (N==1):
        if Arr[0]==element:
            return [0]
        else:
            return []

    indexes = []
    if(Arr[N-1]==element):
        indexes.append(N-1)
    indexes += eachIndex(Arr,N-1,element)
    return indexes


N = 10
element = 27    
A = [12,3,45,65,27,76,6,32,27,8]
print(eachIndex(A,N,element))
