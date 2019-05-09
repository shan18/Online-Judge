#include <iostream>
using namespace std;

int main() {
	long long int n,k,temp=1,count=0;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>k;
	    k=k*temp;
	    while(k%10==0){
	        k=k/10;
	        count++;
	    }
	    temp=k;
	}
	cout<<count;
	return 0;
}
