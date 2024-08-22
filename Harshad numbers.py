n=int(input())
on=n
s=0
while n>0:
    r=n%10
    s=s+r
    n=n//10
if on%s==0:
    print("Yes")
else:
    print("No")
