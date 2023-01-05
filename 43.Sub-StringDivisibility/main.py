from itertools import permutations
perm = permutations(["1", "2", "3","0","4","5","6","7","8","9"])
count=0
sum=0
for i in perm:
    Z="".join(i)
    if(int(Z[0:4])%2==0 and int(Z[2:5])%3==0 and int(Z[3:6])%5==0 and int(Z[4:7])%7==0 and (int(Z[5:8])%11==0 and int(Z[6:9])%13==0 and int(Z[7:10])%17==0)):
        sum=sum+int(Z)
print(sum)