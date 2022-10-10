def strPermutaion(s,ans):

    if(len(s)==0):
        print(ans)
        return 

    for i in range(len(s)):
        strPermutaion(s[0:i]+s[i+1:],ans+s[i])
    
    return

s = "abc"
strPermutaion(s,"")