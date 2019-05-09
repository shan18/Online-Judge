n=int(input())
P= []  
def sieve(n):  
    prms = [True] * (n + 1)
    p = 2 
    while(p * p <= n): 
        if (prms[p] == True): 
            i = p * 2 
            while(i <= n):  
                prms[i] = False 
                i += p 
        p += 1;  
    for p in range(2,n+1):  
        if (prms[p]):  
            P.append(p)
def div(n): 
    sieve(n)
    r = 1
    for i in range(len(P)):
        p = P[i];  
        exp = 0;  
        while (p<=n): 
            exp = exp + int(n/p);  
            p = p * P[i];  
        r = r * (exp + 1);  
    return r;  
print(div(n));
