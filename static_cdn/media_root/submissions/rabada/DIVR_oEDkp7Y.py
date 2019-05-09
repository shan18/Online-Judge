def p(n):
    arr = [1] * (n-1)
    arr1 = []

    for i in range(2,int(n**(.5))+1):
        if arr[i-2] == 1:
            for j in range(i*i,n,i):
                arr[j-2] = 0
    
    for i in range(2,n):
        if(arr[i-2]==1):
            arr1.append(i)
    return arr1
            


def div(n):
    arr = p(n)
    arr1 = [1] * len(arr)

    for i in range(0,len(arr)):
        while(n % arr[i] == 0):
            n = n/arr[i]
            arr1[i] += 1
    
    m = 1
    for i in arr1:
        m *= i
    
    return m


n = int(input())
arr = []
for i in range(0,n):
    arr.append(int(input()))
    
for i in range(0,n):
    print(div(arr[i]))
