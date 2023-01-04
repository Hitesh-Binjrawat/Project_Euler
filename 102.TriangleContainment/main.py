f=open("trian.txt","r")
count=0
for i in f:
    L=list(i.split(","))
    L=[eval(j) for j in L]
    Area=0.5*abs((L[0]*(L[3]-L[5])+L[2]*(L[5]-L[1])+L[4]*(L[1]-L[3])))
    Area1=0.5*abs(L[0]*L[3]-L[2]*L[1])
    Area2=0.5*abs(L[0]*L[5]-L[4]*L[1])
    Area3=0.5*abs(L[2]*L[5]-L[4]*L[3])
    if Area==Area1+Area2+Area3:
        count=count+1
print(count)

