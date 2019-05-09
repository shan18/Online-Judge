#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	
	int s=0;
	string x;
	int t;
	cin>>t;
	int a=0,b=0;
	for(int i=0;i<t;i++){
		cin>>x;
		if(x=="dheeraj"){
			a++;
		}
		else if(x=="ranjeet"){
			b++;
		}
	}
	if(a>b){
		cout<<"dheeraj"<<endl;
	}
	else if(a<b){
		cout<<"ranjeet"<<endl;
	}
	else{
		cout<<"draw"<<endl;
	}

	return 0;
}