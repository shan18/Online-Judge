import math
n=int(input())
def calc(n):

    if n == 1 or n == 0:
        return 1
    result = 1 
    for x in range(1, n + 1, 1):
        result *= x
    return result
n=calc(n)
cnt=0
for i in range(1,math.ceil(math.sqrt(n))):
    if n%i==0:
        if n//i==i:
            cnt=cnt+1
        else:
            cnt=cnt+2
print(cnt)
  
