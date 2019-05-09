#include <iostream>
using namespace std;

int main() {
	int ranjeet=0,dheeraj=0,n;
	cin>>n;
	long long int r=18+1+14+10+5+5+20;
	long long int d=4+8+5+5+18+1+10;
	while(n--){
	    string s;
	    cin>>s;
	    long long int x=0;
	    for(int i=0;i<s.length();i++){
	        x=x+s[i]-96;
	    }
	    if(x==r) ranjeet++;
	    else if(x==d) dheeraj++;
	}
	if(ranjeet>dheeraj) cout<<"ranjeet";
	else cout<<"dheeraj";
	return 0;
}
