def p(n):
    arr = [1] * (n+1)
    arr1 = []

    p = 2
    while((p*p)<n):
        if(arr[p] == 1):
            for i in range((p*2),n,p):
                arr[i] = 0
        p += 1
    
    for i in range(2,n+1):
        if(arr[i]==1):
            arr1.append(i)
    return arr1
            


def div(n):
    arr = p(n)
    m = 1

    for i in range(0,len(arr)):
        c = 1
        while(n % arr[i] == 0):
            n = n/arr[i]
            c += 1
        m *= c
    
    return m


n = int(input())

for i in range(0,n):
    print(div(int(input())))
