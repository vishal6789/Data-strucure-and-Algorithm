def power(x,n):
    
    if (n==1):
        return x
    elif (n==0):
        return 1

    if (n%2==0):
        return power(x,n/2)*power(x,n/2)    
    
    return x*power(x,n-1)

X = 2
N = 10
print(power(X,N))