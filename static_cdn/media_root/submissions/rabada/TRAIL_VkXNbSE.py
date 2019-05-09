def a(arr):
    s2 = 0
    s5 = 0

    for i in arr:

        while(i % 2 == 0):
            i = i/2
            s2 += 1
        
        while(i % 5 == 0):
            i = i/5
            s5 += 1
        
    if(s2 < s5):
        return s2
    else:
        return s5

l = int(input())
arr = list(map(int,input().split()))
print(a(arr))





