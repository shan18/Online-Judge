#include <iostream>
using namespace std;

int main() {
	long long int n,k,count5=0,count2=0;
	cin>>n;
	while(n--){
		cin>>k;
		while(k%5==0){
			k=k/5;
			count5++;
		}
		while(k%2==0){
			k=k/2;
			count2++;
		}
	}
	if(count5>count2) cout<<count2;
	else cout<<count5;
	return 0;
}
