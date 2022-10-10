def printDecreasing(n):
    if(n==0):
        return
    print(n)
    printDecreasing(n-1)


n = 10
printDecreasing(n)