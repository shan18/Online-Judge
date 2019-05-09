t= int(input())
for k in range(t):
    n,a,b= map(int,input().split(' '))
    x=list(map(int,input().split(' ')))
    dm=max(x)-b
    dn=min(x)+b
    cnt=0
    if dm<=dn:
        for j in range(dm,dn+1):
            for i in x:
                if i in range(j-b,j+b+1):
                    cnt=cnt+1;
            if cnt>=a:
                break
    else:
        for j in range(dn,dm+1):
            for i in x:
                if i in range(j-b,j+b+1):
                    cnt=cnt+1;
            if cnt>=a:
                break
        if cnt<a:
            print("YES")
        else: print("NO")
