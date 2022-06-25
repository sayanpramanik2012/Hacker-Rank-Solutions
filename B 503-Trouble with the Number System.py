n=int(input())
s=0
p=1
for i in range(n):
    x=(int(input())) 
    while(x%10==0):
        s+=1
        x//=10
    p*=x
print(str(p)+"0"*s)