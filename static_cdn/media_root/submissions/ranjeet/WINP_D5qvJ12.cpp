#include<bits/stdc++.h>
using namespace std;

int fun(string s){
	int a=0;
	for(int i=0;i<s.length();i++){
		a+=s[i]-'a'+1;
	}
	return a;
}
int main(){
		int s=0;
		string x;
		int t;
		cin>>t;
		int a=0,b=0;
		int r=fun("ranjeet");
		int d=fun("dheeraj");
		for(int i=0;i<t;i++)
		{
			cin>>x;
			int xx=fun(x);
			if(xx==d){
				a++;
			}
			else if(xx==r){
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
	// }

	return 0;
}