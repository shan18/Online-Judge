def b(a,l):
    s2 = 0
    s5 = 0

    for i in range(0,l):
        if(a[i] == 0):
            return 0

        while(a[i] % 2 == 0):
            a[i] = a[i]/2
            s2 += 1
        
        while(a[i] % 5 == 0):
            a[i] = a[i]/5
            s5 += 1
        
    if(s2 < s5):
        return s2
    else:
        return s5

l = int(input())
arr = list(map(int,input().split()))
print(b(arr,l))





