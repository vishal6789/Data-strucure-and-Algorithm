def printIncreasing(n):
    
    if(n==0):
        return
    printIncreasing(n-1)
    print(n)
    return

n=5
printIncreasing(5)