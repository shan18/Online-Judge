n=int(input())
x=[]
for i in range(n):
    x.append(int(input()))
for i in x:
    sum=0
    for j in range(1,i//2+1):
        if(i%j==0):
            sum=sum+1
    if i==0:
        print('0')
    else: print(sum+1)
