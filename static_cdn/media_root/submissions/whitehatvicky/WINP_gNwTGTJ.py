d={'a':1, 'b':2, 'c':3, 'd':4, 'e':5, 'f':6, 'g':7, 'h':8, 'i':9, 'j':10, 'k':11, 'l':12,'m':13, 'n':14, 'o':15, 'p':16, 'q':17, 'r':18, 's':19, 't':20, 'u':21, 'v':22, 'w':23, 'x':24, 'y':25, 'z':26}
n= int(input())
dh=51
rn=73
d1=0
r1=0
for i in range(n):
    a= input()
    sum=0
    for x in a:
        sum=sum+d[x]
    if sum==dh:
        d1=d1+1
    if sum==rn:
        r1=r1+1
    print(sum)
if(d1==r1):
    print("draw")
elif d1>r1:
    print("dheeraj")
else: print("ranjeet")

     
