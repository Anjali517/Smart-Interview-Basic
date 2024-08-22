n=int(input())
l=list(map(int,input().split()))
for i in range(len(l)):
    if i==0:
        print(sum(l[1:]),end=" ")
    elif i==len(l)-1:
        print(sum(l[:n-1]),end=" ")
    else:
        print(abs(sum(l[:i])-sum(l[i+1:])),end=" ")
    
        
    
    
    
