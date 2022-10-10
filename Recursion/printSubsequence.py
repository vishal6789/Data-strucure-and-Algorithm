from re import sub


def subSequence(s,ans):

    if (len(s)==0):
        print(ans)
        return

    subSequence(s[1:],ans)

    ans += s[0]

    subSequence(s[1:],ans)

    return
 
    

    
    
    return

s = "abc"
subSequence(s,'')

