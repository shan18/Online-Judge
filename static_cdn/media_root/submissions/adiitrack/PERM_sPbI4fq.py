i=int(input())
mix=[]
unique_list=[]
mix=input().split(" ")
for x in mix: 
        # check if exists in unique_list or not 
    if x not in unique_list: 
        unique_list.append(x)
#mix.sort(reverse=True)
print(len(unique_list)-1)

