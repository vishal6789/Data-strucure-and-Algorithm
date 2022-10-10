from numpy import maximum
from pandas import array


def arrayMax(Arr,N):

    if(N==1):
        return Arr[0]

    maximum = arrayMax(Arr,N-1)
    if(maximum < Arr[N-1]):
        return Arr[N-1]
    else:
        return maximum 



N = 10
arr = [25,12,14,50,16,35,69,44,54,50]  
print(arrayMax(arr,N))