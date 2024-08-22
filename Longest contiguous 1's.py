n=int(input())
l=list(map(int,input().split()))
c=0
max=0
for i in range(0,n):
    if l[i]==1:
        c+=1
        if max<=c:
            max=c
    else:
        if max<=c:
            max=c
        c=0
print(max)
