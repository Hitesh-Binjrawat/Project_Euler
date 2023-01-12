L=[]
for i in range(1,999999):
    for j in range(i+1,999999):
        m=str(i)
        n=str(j)
        k=i*j
        o=str(k)
        if (len(m) + len(n) + len(o) > 9):
            break
        if(len(m)+len(n)+len(o)==len(set(m+n+o))==9 and "0" not in set((m+n+o))):
            L.append(k)
L=set(L)
L=list(L)
sum1=0
for i in L:
    sum1=sum1+i
print(sum1)