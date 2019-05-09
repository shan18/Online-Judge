l = int(input())
arr = list(map(int,input().split()))
arr1 = []
arr2 = []
for i in range(0,l):
    if(arr[i]%2==0):
        arr1.append(arr[i])
    else:
        arr2.append(arr[i])
arr1.sort()
j=0
for i in range(1,l+1):
    if(i%2 == 0 and j<len(arr1)):
        arr1[j] = arr1[j] * 2
        j = j+1
    
print(sum(arr1)+sum(arr2))