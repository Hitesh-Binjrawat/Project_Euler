def largest_rw_product(M):
    maxi=0
    for i in range(20):
        for j in range(17):
            product=M[i][j]*M[i][j+1]*M[i][j+2]*M[i][j+3]
            if(product>maxi):
                maxi=product
    return maxi
def largest_cln_product(M):
    maxi=0
    for i in range(17):
        for j in range(20):
            product=M[i][j]*M[i+1][j]*M[i+2][j]*M[i+3][j]
            if(product>maxi):
                maxi=product
    return maxi
def largest_pdig_product(M):
    maxi=0
    for i in range(17):
        for j in range(17):
            product=M[i][j]*M[i+1][j+1]*M[i+2][j+2]*M[i+3][j+3]
            if product>maxi:
                maxi=product
    return maxi
def largest_sdig_product(M):
    maxi=0
    for i in range(17):
        for j in range(3,20):
            product=M[i][j]*M[i+1][j-1]*M[i+2][j-2]*M[i+3][j-3]
            if(product>maxi):
                maxi=product
    return maxi

M=[]
f=open("grd.txt","r")
for i in range(20):
    C=[]
    for j in range(20):
        C.append(0)
    M.append(C)
for i in range(20):
    for j in range(20):
        M[i][j]=int(f.read(2))
        f.read(1)
L=[]
L.append(largest_rw_product(M))
L.append(largest_cln_product(M))
L.append(largest_pdig_product(M))
L.append(largest_sdig_product(M))
print(max(L))