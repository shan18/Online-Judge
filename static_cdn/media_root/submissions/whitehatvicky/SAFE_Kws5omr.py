t= int(input())
for j in range(t):
    n,a,b= map(int,input().split(' '))
    x=list(map(int,input().split(' ')))
    x.sort()
    cnt=0
    for i in range(0,len(x)-a+1):
        if (x[i+a-1]-x[i])==2*b:
            cnt=1
    if cnt==0:
        print("YES")
    else: print("NO")