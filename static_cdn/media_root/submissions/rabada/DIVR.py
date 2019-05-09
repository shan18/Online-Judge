def div(n):
    c=2
    for i in range(2,n):
        if(n%i == 0):
            c = c + 1
    return c


n = int(input())
for i in range(0,n):
    print(div(int(input())))
