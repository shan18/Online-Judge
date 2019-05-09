n=int(input())
x=[]
for i in input().split(' '):
    x.append(int(i))
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
            u.append(i)
        elif i[0]!=i[1]:
            if i[0:2] not in u:
                u.append(i[0:2])
x=[]
for i in u:
    if i not in x:
        x.append(i)
print(len(x))

