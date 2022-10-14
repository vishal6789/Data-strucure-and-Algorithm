def targetSumSubset(a,targetSum,ans):
    if (targetSum==0):
        print(ans)
        return
    
    if(len(a)==0):
        return

    targetSumSubset(a[1:],targetSum-a[0],ans+[a[0]])
    targetSumSubset(a[1:],targetSum,ans)
    return





a = [10,20,30,40,50]
targetSum = 60
targetSumSubset(a,targetSum,[])
