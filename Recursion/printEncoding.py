def printEncoding(s,ans):
    if (len(s)==0):
        print(ans)
        return 
    
    if (int(s[0])!=0):
        printEncoding(s[1:],ans+chr(96+int(s[0])))
    if (len(s)>=2):
        if (int(s[0:2])<=27):
            printEncoding(s[2:],ans+chr(96+int(s[0:2])))
    return


encoding = '1224'
printEncoding(encoding,'')