n=int(input())
l=list(map(int,input().split()))
#for i in l:
 #   if i%2!=0:
    #    print(i,end=" ")
for i in l:
    if l.count(i)==1:
        print(i,end=" ")


