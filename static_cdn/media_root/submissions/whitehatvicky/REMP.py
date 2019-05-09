n=int(input())
x=[]
for i in input().split(' '):
    x.append(int(i))
x=sorted(x,reverse=True)
e=[]
o=[] 
for k in x:
    if k%2==0:
        e.append(k)
    else: o.append(k)
sum=0;
for i in o:
    sum=sum+i
if(len(e)>n//2):
    for i in range(n//2):
        sum=sum+2*e[i]
    for i in range(n//2,len(e)):
        sum=sum+e[i]
else:
    for i in range(len(e)):
        sum=sum+2*e[i]
print(sum)
