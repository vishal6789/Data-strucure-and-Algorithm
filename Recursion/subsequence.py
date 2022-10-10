from hashlib import new


def subSequence(s):
    # print(s)
    if (len(s)==1):
        return ['',s]
    if len(s)==0:
        return ['']
    subseq = subSequence(s[1:])
    newSubSeq = []
    for i in subseq:
        newSubSeq.append(i)
        newSubSeq.append(s[0] + i)
    return newSubSeq


s = "abc"
subseq = subSequence(s)
print(subseq)
for i in subseq:
    print(i)
