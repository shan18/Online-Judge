n=int(input())
x=list(map(int,input().split(' ')))
u=[]
for i in range(n):
    for j in range(i+1,n+1):
        x[i:j].sort(reverse=True)
    if len(x[i:j])>1:
        if len(x[i:j])==2 and x[i:j][0]!=x[i:j][1]:
            if x[i:j][0:2] in u:
                pass
            else: u.append(x[i:j])
        elif x[i:j][0]!=x[i:j][1]:
            if x[i:j][0:2] in u:
                pass
            else:u.append(x[i:j][0:2])
del x
print(len(u))
