t= int(input())
n,a,b= map(int,input().split(' '))
x=list(map(int,input().split(' ')))
x.sort()
cnt=0
for j in range(len(x)-a+1):
    if (x[a-1]-x[0])==2*b:
        print("NO")
        cnt=1
        break
if cnt==0: 
    print("YES")