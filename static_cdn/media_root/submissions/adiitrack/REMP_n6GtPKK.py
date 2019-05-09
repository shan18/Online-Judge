def Split(mix): 
    ev_li = [] 
    od_li = [] 
    for i in mix: 
        if (i % 2 == 0): 
            ev_li.append(i) 
        else: 
            od_li.append(i) 
    #print("Even lists:", ev_li) 
    #print("Odd lists:", od_li) 
    ev_li.sort(reverse= True)
    od_li.sort(reverse=True)
    sum=0
    if(len(ev_li)==len(od_li)):
        for a in range(0,len(od_li)):
           sum=sum+ev_li[a]*2+od_li[a] 
        return sum
    if(len(ev_li)>len(od_li)):
        for a in range(0,len(od_li)):
           sum=sum+ev_li[a]*2+od_li[a] 
        for a in range(len(od_li),len(ev_li)):
           sum=sum+ev_li[a] 
        return sum
    if(len(od_li)>len(ev_li)):
        for a in range(0,len(ev_li)):
           sum=sum+ev_li[a]*2+od_li[a] 
        for a in range(len(ev_li),len(od_li)):
           sum=sum+od_li[a] 
        return sum
i=int(input())
mix=[]
mix=input().split(" ")
for a in range(0,i):
    mix[a]=int(mix[a])
print(Split(mix))
