n=int(input())
l=list(map(int,input().split()))
m=[]
for i in l:
    if l.count(i)>1:
        m.append(i)
m=set(m)
m=list(m)
for i in m:
    print(i,end=" ")
        
