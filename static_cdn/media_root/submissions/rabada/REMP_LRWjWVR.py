l = int(input())
arr = list(map(int,input().split()))
arr.sort()
arr1 = []
arr2 = []
e = 0
for i in range(0,l):
    if(arr[i]%2==0):
        arr1.append(arr[i])
    else:
        arr2.append(arr[i])
    if((i+1)%2 == 0):
        e = e+1

for i in range(0,len(arr1)):
    if(i < e):
        arr1[i] = arr1[i] * 2

print(sum(arr1)+sum(arr2))