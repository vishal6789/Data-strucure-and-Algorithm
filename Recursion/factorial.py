def factorial(n):

    if(n==0 or n==1):
        return 1

    return n * factorial(n-1)

N = 5
print(factorial(N))