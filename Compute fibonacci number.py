n=int(input())

#def fib1(n):
#    fib(n)
def fib(i):
    if i==0 or i==1:
        return i
    else:
        return fib(i-1)+fib(i-2)
x=fib(n)
print(x)
