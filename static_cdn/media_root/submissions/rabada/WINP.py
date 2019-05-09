d = {}
for i in range(ord('a'),ord('z')+1):
    d[chr(i)] = i-ord('a')+1

a=73
b=51
a1=0
b1=0
for i in range(0,int(input())):
    c=0
    e = str(input())
    for i in range(0,len(e)):
        c = c + d[e[i]]
    if(c == a):
        a1 = a1 + 1
    elif (c == b):
        b1 = b1 + 1

if (a1 > b1):
    print('ranjeet')
else:
    print('dheeraj')
