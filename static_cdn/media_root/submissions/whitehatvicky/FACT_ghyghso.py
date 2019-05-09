m=int(input())
P= []  
def s(n):  
    pr = [True] * (n + 1)
    p = 2 
    while(p * p <= n): 
        if (pr[p] == True): 
            i = p * 2 
            while(i <= n):  
                pr[i] = False 
                i += p 
        p += 1;  
    for p in range(2,n+1):  
        if (pr[p]):  
            P.append(p)
def D(n): 
    s(n)
    r = 1
    for i in range(len(P)):
        p = P[i];  
        exp = 0;  
        while (p<=n): 
            exp = exp + int(n/p)  
            p = p * P[i]  
        r = r * (exp + 1)  
    return r  
print(D(m))  
