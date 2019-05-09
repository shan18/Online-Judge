t= int(input())
n,a,b= map(int,input().split(' '))
x=list(map(int,input().split(' ')))
max=max(x)
min=min(x)
dm=max-b
dn=min+b
cnt=0
if dm<=dn:
    for i in x:
        if i in range(dm-b,dm+b+1):
            cnt=cnt+1;
else:
    for i in x:
        if i in range(j-b,j+b+1):
            cnt=cnt+1;
if cnt<a:
    print("YES")
else: print("NO")


