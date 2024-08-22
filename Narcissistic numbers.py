n=int(input())
c=0
on=n
while n>0:
    r=n%10
    c=c+1
    n=n//10
s=0
z=on
while on>0:
    d=on%10
    s=s+(d**c)
    on=on//10
if z==s:
    print("Yes")
else:
    print("No")

    
    
