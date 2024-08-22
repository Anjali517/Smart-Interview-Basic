l=list(map(int,input().split()))
a=l[0]
b=l[1]
c=l[2]
f=0
if (a+b)>c:
    f=f+1
if (b+c)>a:
    f=f+1
if (a+c)>b:
    f=f+1
if f==3:
    print("Yes")
else:
    print("No")
    
