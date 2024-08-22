s=input()
l=[]
for i in s:
    if i.isupper():
        ch=ord(i)+32
        l.append(chr(ch))
    if i.islower():
        ch=ord(i)-32
        l.append(chr(ch))
for i in l:
    print(i,end="")
        





