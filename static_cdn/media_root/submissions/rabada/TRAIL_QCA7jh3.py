def mul(a,n):
    if n==0:
        return (a[n])
    else:
        return (a[n] * mul(a,n-1))


def a(arr,n):
    
    m = mul(arr,n)

    c=0
    while(m%10 == 0):
        m = m // 10
        c = c + 1
    return c

l = int(input())
arr = list(map(int,input().split()))

print(a(arr,l-1))




