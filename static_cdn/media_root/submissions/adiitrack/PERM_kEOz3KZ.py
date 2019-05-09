j=int(input())
i=0
mix=[]
s=[]
list=input().split(" ")
while i < len(list)-1:
    mix.append(list[i:i+2])
    mix[i].sort(reverse=True)
    if mix[i] not in s:
        s.append(mix[i])
    i = i+1
print(len(s))
