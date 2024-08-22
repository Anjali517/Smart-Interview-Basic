def fun(s):
    n = len(s)
    lps = [0] * n 
    length = 0  
    i = 1
    while i < n:
        if s[i] == s[length]:
            length += 1
            lps[i] = length
            i += 1
        else:
            if length != 0:
                length = lps[length - 1]
            else:
                lps[i] = 0
                i += 1

   
    return lps[n - 1]

s = input().strip()


result = fun(s)


print(result)
