n=int(input())
x=[]
for i in input().split(' '):
    x.append(int(i))
c2 = 0
c5 = 0
for i in range(0,n) :
    while (x[i] % 2 == 0) : 
        x[i] = x[i] // 2
        c2 = c2 + 1
    while (x[i] % 5 == 0) : 
        x[i] = x[i] // 5
        c5 = c5 + 1 
if(c2 < c5) : 
    print(c2) 
else :  
    print(c5) 
