j=int(input())
i=0
mix=[]
s=[]
list=input().split(" ")
while i < len(list)-1:
    if list[i] == list[i+1]:
        del list[i]
    else:
        i = i+1
for i in range(len(list)-1):
    mix.append(list[i:i+2])
    mix[i].sort(reverse=True)
    if mix[i] not in s:
        s.append(mix[i]) 
        
print(len(s))

