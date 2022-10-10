def towerOfHanoi(N,A,B,C):
    #A = initial tower,B=Final tower, C=Helping Tower
    
    if(N==1):
        print(N," : ",A," --> ",B)
        return
    
    towerOfHanoi(N-1,A,C,B)
    print(N," : ",A," --> ",B)
    towerOfHanoi(N-1,C,B,A)

Num = 3
towers = [10,11,12]
towerOfHanoi(Num,towers[0],towers[1],towers[2])