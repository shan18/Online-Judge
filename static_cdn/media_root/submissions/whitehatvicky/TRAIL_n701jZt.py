n= int(input())
x=[]
for i in input().split(' '):
    x.append(int(i))
m=1
for i in x:
    m=m*i
m=str(m)
j=len(m)
print(m.count('0'))
m=m.strip('0')
k=len(m)


