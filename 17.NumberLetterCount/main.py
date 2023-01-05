ones={0:0,1:3,2:3,3:5,4:4,5:4,6:3,7:5,8:5,9:4}
Tens={0:0,2:6,3:6,4:5,5:5,6:5,7:7,8:6,9:6}
Hdths={1:10,2:10,3:12,4:11,5:11,6:10,7:12,8:12,9:11}
elv={10:3,11:6,12:6,13:8,14:8,15:7,16:7,17:9,18:8,19:8}
sum=0
for i in range(1,1000):
    j = str(i)
    if i<100:
        if(i>=20):
            sum+=Tens[int(j[0])]+ones[int(j[1])]
        elif (i<10):
            sum+=ones[i]
        elif(i>=10 and i<20):
            sum+=elv[i]
    else:
        if(j[1]!="1"):
            if(j[1:3]=="00"):
                sum+=Hdths[int(j[0])]+Tens[int(j[1])]+ones[int(j[2])]
            else:
                sum += Hdths[int(j[0])] + Tens[int(j[1])] + ones[int(j[2])]+3
        else:
            sum+=Hdths[int(j[0])]+elv[int(j[1:3])]+3

print(sum+11)