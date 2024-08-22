l=list(map(int,input().split()))
m=l[0]
n=l[1]
c=0
k=list(map(int,input().split()))
for i in range(0,m):
    if k[i]==n:
        c=c+1
        print(i)
if c==0:
    print("-1")
        

     

