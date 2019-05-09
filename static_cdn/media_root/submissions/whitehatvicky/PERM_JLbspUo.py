n=int(input())
x=list(map(int,input().split(' ')))
y=[]
for i in range(n):
    for j in range(i,n):
        if x[j]>x[i] and [x[j],x[i]] not in y:
            y.append([x[j],x[i]])
            break
print(len(y))