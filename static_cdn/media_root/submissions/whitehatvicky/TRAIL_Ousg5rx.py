n= int(input())
x=[]
for i in input().split(' '):
    x.append(int(i))
m=1
for i in x:
    m=m*i
m=str(m)
j=len(m)
m=m.rstrip('0')
k=len(m)
print(j-k)

