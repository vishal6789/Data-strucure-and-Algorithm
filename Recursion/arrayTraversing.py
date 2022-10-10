
def arrayTraversing(Arr,N):
    
    if(N==1):
        print(Arr[0])
        return

    arrayTraversing(Arr,N-1)
    print(Arr[N-1])


N = 5
arr = [1,2,3,4,5]  
arrayTraversing(arr,N)