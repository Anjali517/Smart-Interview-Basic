n=int(input())
on=n
s=0
while n>0:
    r=n%10
    s=s+(r*r*r)
    n=n//10
if on==s:
    print("Yes")
else:
    print("No")






