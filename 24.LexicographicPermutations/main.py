from itertools import permutations
K=[]
L=permutations([1,2,3,4,5,6,7,8,9,0])
for i in L:
    i=''.join(map(str, i))
    K.append(i)
K.sort()
print(K[999999])