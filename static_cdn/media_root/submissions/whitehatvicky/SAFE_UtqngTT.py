t= int(input())
n,a,b= map(int,input().split(' '))
x=list(map(int,input().split(' ')))
x.sort()
y=[]
for i in range(n):
    for j in range(i,n):
        if (x[j]-x[i])==2*b and [x[i],x[j]] not in y:
            y.append([x[i],x[j]])
for i in y:
    cnt=0
    for j in x:
        if j in range(i[0],i[1]+1):
            cnt=cnt+1
    if cnt>=a:
        print("NO")
        break
if cnt<a:
    print("YES")