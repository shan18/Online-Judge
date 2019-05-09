import math
n=int(input())
x=[]
for i in range(n):
    x.append(int(input()))
for i in x:
    sum=0
    for j in range(1,math.ceil(math.sqrt(i))):
        if(i%j==0):
           if n/i==i:
               sum=sum+1
           else: sum=sum+2
    print(sum)
