from math import log10
f=open("exp.txt","r")
maxi=0
count=1
maxcount=0
for i in f:
    L=i.split(",")
    K=int(L[1])*log10(int(L[0]))
    #print(K)
    if(K>maxi):
        maxi=K
        maxcount=count
    count+=1
print(maxcount)

