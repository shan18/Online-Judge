t= int(input())
n,a,b= map(int,input().split(' '))
x=list(map(int,input().split(' ')))
x.sort()
cnt=0
if (x[a-1]-x[0])==2*b:
    print("NO")
else: print("YES")