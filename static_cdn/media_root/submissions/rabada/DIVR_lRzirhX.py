def div(n):
    if(n%2==0):
        c=3
        for i in range(4,n//2+1,2):
             if(n%i == 0):
                c = c + 1
        return c
    elif(n%2==1):
        c=2
        for i in range(3,n):
            if(n%i == 0):
                c = c+1
        return c


n = int(input())
for i in range(0,n):
    print(div(int(input())))
