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
	
	// string s1="input";
	// string s2="output";
	// for(int i=1;i<=10;i++){
		// string ss1,ss2;
		// char ch='0'+i;
		// ss1=s1+ch+".txt";
		// ss2=s2+ch+".txt";
		// ifstream input;
		// ofstream output;
		// input.open(ss1);
		// output.open(ss2);

		int s=0;
		string x;
		int t;
		// input>>t;
		cin>>t;
		int a=0,b=0;
		int r=fun("ranjeet");
		cout<<r<<endl;

		int d=fun("dheeraj");
		cout<<d<<endl;
		for(int i=0;i<t;i++){
			cin>>x;
			// input>>x;
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