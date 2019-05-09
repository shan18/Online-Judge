#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,i=0,j=0;
	cin>>n;
	int x[100000];
	for(int i=0;i<n;i++){
	    cin>>x[i];
	}
	sort(x,x+n);
	for( i=0, j=0;j<n;j++){
	    if(x[j]!=x[i]){
	        i++;
	        x[i]=j;
	    }
	}
	cout<<i;
	return 0;
}
