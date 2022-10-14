def floodFill(a,row,col,ans):
    # print(len(a[0]))
    

    if(row==(len(a)-1)  and col==(len(a[0])-1)):
        print(ans)
        return
    
    a[row][col] = 1

    if (row<len(a)-1 and a[row+1][col]!=1):
        floodFill(a,row+1,col,ans+'d')
    
    if (col<len(a[0])-1 and a[row][col+1]!=1):
        floodFill(a,row,col+1,ans+'r')

    if (row > 0 and a[row-1][col]!=1):
        floodFill(a,row-1,col,ans+'u')

    if (col>0 and a[row][col-1]!=1):
        floodFill(a,row,col-1,ans+'l')

    a[row][col] = 0
    return


a = [[0,1,0,0,0,0,0],[0,1,0,1,1,1,0],[0,0,0,0,0,0,0],[1,0,1,1,0,1,1],[1,0,1,1,0,1,1],[1,0,0,0,0,0,0]]

# a=[[0,0],[0,0]]

floodFill(a,0,0,'')

