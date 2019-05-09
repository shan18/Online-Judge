t=int(input())
n,a,b=map(int,input().split(' '))
x=[]
for i in input().split():
    x.append(int(i))
max= x[1] - x[0]      
for i in range(n): 
    for j in range( i+1,n): 
        if(x[j] - x[i] > max):  
            max= x[j] - x[i]
if max<=a:
    print("YES")
else: print("NO")
