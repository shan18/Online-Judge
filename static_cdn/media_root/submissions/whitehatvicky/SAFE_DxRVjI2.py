t= int(input())
n,a,b= map(int,input().split(' '))
x=list(map(int,input().split(' ')))
print(max(x),min(x))
max=max(x)
min=min(x)
dm=max-b
dn=min+b
cnt=0
if dm<=dn:
    for i in x:
        if i in range(dm-b,dm+b+1):
            cnt=cnt+1;
            print(cnt)
else:
    for i in x:
        if i in range(dn-b,dn+b+1):
            cnt=cnt+1;
            print(cnt)
if cnt<a:
    print("YES")
else: print("NO")


