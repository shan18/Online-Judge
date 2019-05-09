def a(arr):
    m = 1
    for i in range(0,l):
        m = m * arr[i]

    c=0
    while(m%10 == 0):
        m = m / 10
        c = c + 1
    return c

l = int(input())
arr = list(map(int,input().split()))

print(a(arr))



