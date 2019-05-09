t= int(input())
n,a,b= map(int,input().split(' '))
x=list(map(int,input().split(' ')))
max=max(x)
min=min(x)
dm=max-b
dn=min+b
cnt=0
for j in range(dn,dm+1):
    cnt=0
    for i in x:
        if i in range(j-b,j+b+1):
            cnt=cnt+1
    if cnt>=a:
        print("NO")
        break
if cnt<a:
    print("YES")
