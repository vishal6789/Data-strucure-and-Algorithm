#print the first occcurance of element or -1 if not there

def elePos(Arr,N,element):

    if (N==1):
        if (Arr[0]==element):
            return 0
        else:
            return -1

    index = elePos(Arr,N-1,element)
    if (Arr[N-1]==element and index==-1):
        return (N-1)
    else:
        return index


N = 10
element = 27
A = [12,3,45,65,27,76,6,32,27,8]
print(elePos(A,N,element))

