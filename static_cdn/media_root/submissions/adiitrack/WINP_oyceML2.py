j=int(input())
str1="dheeraj"
str2="ranjeet"
sum1=0
sum2=0
for i in range(len(str1)):
	sum1=sum1+ord(str1[i])-96; 
for i in range(len(str2)):
	sum2=sum2+ord(str2[i])-96; 
temp1=0
temp2=0
for a in range(j):
	sum=0
	str3=input()
	
	for i in range(len(str3)):
		sum=sum+ord(str3[i])-96;
		
		
	if sum==sum1 :
		temp1+=1
	if sum==sum2 :
		temp2+=1
if temp1>temp2 :
	print("dheeraj")
if temp2>temp1 :
	print("ranjeet")
if temp1==temp2:
	print("draw")
