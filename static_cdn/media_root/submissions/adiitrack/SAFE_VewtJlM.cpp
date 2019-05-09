#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int t2;
	long int n2,a2,b2,count2=0;
	cin>>t2;
	int temp=0;
	while(temp<t2){

	cin>>n2>>a2>>b2;
	 long int arr2[n2];
	int great=0;
	for(int i2=0;i2<n2;++i2){
		cin>>arr2[i2];
		if(arr2[i2]>great)great=arr2[i2];
	}

	int temp1=1,j2=0;
	while(temp1< a2){
	    count2=0;
		for(j2=0;j2<n2/2;++j2){
			if((arr2[j2]<=temp1+b2 and arr2[j2]>=temp1-b2)){
				count2++;
			}
			if(arr2[j2+n2/2]<=temp1+b2 and arr2[j2+n2/2]>=temp1-b2){
			    count2++;
			}
		}    
		//cout<<count2;
		 if(count2>=a2){cout<<"NO"; break;}
		 else if(temp1==n2-a2-1  ) {
				cout<<"YES";
				break;
				}
		temp1+=1;
	
	}
	temp+=1;

	
    }
}
    
