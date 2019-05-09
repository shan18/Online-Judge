j=int(input())
i=0
mix=[]
list=input().split(" ")
while i < len(list)-1:
    if list[i] == list[i+1]:
        del list[i]
    else:
        i = i+1
for i in range(len(list)-1):
    mix.append(list[i:i+2])
for i in range(len(mix)):
    mix[i].sort(reverse=True)
s=[]
for i in mix:
       if i not in s:
          s.append(i)  
print(len(s))

