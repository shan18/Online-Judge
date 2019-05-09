#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n],f=0,e=0,z=0;
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++){
		int r=s[i]%10;
		if(r==0) z++;
		else if(r==5) f++;
	        else if(r%2==0) e++;
	}
//	cout<<z<<" "<<f<<" "<<e<<endl; 
	int g;
	if(f<e) g=f;
	else g=e;
	z+=g;
	cout<<z;
}
