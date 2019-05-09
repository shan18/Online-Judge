t2=int(input())
t3,t4,t5=input().split( )
t3=int(t3)
t4=int(t4)
t5=int(t5)
arr=[]
arr=input().split( )
for i in range(len(arr)):
    arr[i]=int(arr[i])
count=0
for i in range(0,t3):
    if arr[i]<=1+t5 & arr[i]>=1-t5:
        count+=1 
    else:
        print("NO")
        break
if count==t3:
    print("YES")
    
    
