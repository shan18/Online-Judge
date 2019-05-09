n=int(input())
x=list(map(int,input().split(' ')))
u=[]
y=[]
for i in range(n):
    for j in range(i+1,n+1):
        y.append(x[i:j])
del x
for i in y:
    if len(i)>1:
        i.sort(reverse=True)
        if len(i)==2 and i[0]!=i[1]:
            if i[0:2] in u:
                pass
            else: u.append(i)
        elif i[0]!=i[1]:
            if i[0:2] in u:
                pass
            else: u.append(i[0:2])
print(len(u))
