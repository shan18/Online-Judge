n=int(input())
x=list(map(int,input().split(' ')
y=[]
for i in range(n):
    for j in range(i,n):
        if x[j]>x[i] and [x[i],x[j]] not in y:
            y.append([x[i],x[j])
print(len(y))