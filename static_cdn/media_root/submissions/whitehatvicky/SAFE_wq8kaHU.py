t= int(input())
n,a,b= map(int,input().split(' '))
x=list(map(int,input().split(' ')))
x.sort()
cnt=0
if (x[a-1]-x[0])==2*b:
    cnt=1
if cnt==0:
    print("YES")
else: print("NO")