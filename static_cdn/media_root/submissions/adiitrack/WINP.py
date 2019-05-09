j=int(input())
str1="dheeraj"
str2="ranjeet"
sum1=0
sum2=0
for i in range(len(str1)):
	sum1=sum1+ord(str1[i]); 
for i in range(len(str2)):
	sum2=sum2+ord(str2[i]); 
temp1=0
temp2=0
for a in range(j):
	sum=0
	str3=input()
	
	for i in range(len(str3)):
		sum=sum+ord(str1[i]);    
		if sum>sum1 :
			break
		elif sum>sum2 :
			break
	if sum==sum1 :
		temp1+=1
	elif sum==sum2 :
		temp2+=1
if temp1>temp2 :
	print("dheeraj")
elif temp1<temp2 :
	print("ranjeet")
else: print("draw")
