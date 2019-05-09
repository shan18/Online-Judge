m= int(input())
def dc(n):
    x = [1]*(n+1)
    p = 2
    while((p*p)<n):
        if (x[p]==1):
	    for i in range((p*2),n,p):
                x[i]=0
	p += 1
	total = 1
    for p in range(2,n+1):
        if (x[p] == 1):
	    count = 0
	    if (n % p == 0):
                while (n % p == 0):
		    n = int(n / p) 
		    count += 1
		total *= (count + 1)
return total
for i in range(m):
    print(dc(int(input())))
