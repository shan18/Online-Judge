n=int(input())
x=map(int,input().split(" "))
u=[]
for i in x:
    if(i in u):
        pass
    else: u.append(i)
print(len(u)-1)
