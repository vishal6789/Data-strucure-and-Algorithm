def mazePath(sx,sy,dx,dy):
    if(sx==dx and sy==dy):
        return ['']

    paths = []
    if(sx<dx):
        paths += ['h'+i for i in mazePath(sx+1,sy,dx,dy)]
    if(sy<dx):
        paths += ['v'+i for i in mazePath(sx,sy+1,dx,dy)]
    
    return paths



sx = 1 #starting x index
sy = 1 #starting y index
dx = 3 #destination x index
dy = 3 #destination y index

for i in mazePath(sx,sy,dx,dy):
    print(i)