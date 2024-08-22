s=input()
c=1
for i in range(len(s)):
    if i<len(s)-1 and s[i]==s[i+1]:
        c+=1
    else:
        print(s[i],end="")
        print(c,end="")
        c=1
    
    
   
