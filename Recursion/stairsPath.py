from commonmark import ReStructuredTextRenderer


def stairpaths(N):

    if (N==0):
        return ['']

    paths = []
    if N>=1:
        paths += ['1'+i for  i in stairpaths(N-1)]
    if N>=2:
        paths += ['2'+i for  i in stairpaths(N-2)]
    if N>=3:
        paths += ['3'+i for  i in stairpaths(N-3)]
    
    return paths

N = 4
print(stairpaths(N))