num = int(input())
arr=input().split(' ')
array=[int(num) for num in arr]
def zero(a,n):
    count2=0
    count5=0
    for i in range(0,n):
        while(a[i]%2==0):
            a[i]=a[i]//2 
            count2+=1
        while(a[i]%5==0):
            a[i]=a[i]//5 
            count5+=1    
    if(count2<count5):
        return count2
    else:
        return count5
print(zero(array,num))
