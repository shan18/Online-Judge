i=int(input())
mix=[]
mix=input().split(" ")
for a in range(0,i):
    mix[a]=int(mix[a])
mix.sort(reverse=True)
def unique(list1): 
  
    # intilize a null list 
    unique_list = [] 
      
    # traverse for all elements 
    for x in list1: 
        # check if exists in unique_list or not 
        if x not in unique_list: 
            unique_list.append(x) 
    return unique_list
mix=unique(mix)
print(len(mix)-1)

