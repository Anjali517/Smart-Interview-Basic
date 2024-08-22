n=int(input())
a=list(map(int, input().split()))
c=0
h=0
for i in a:
    c+=i
    h=max(h,c)
print(h)
