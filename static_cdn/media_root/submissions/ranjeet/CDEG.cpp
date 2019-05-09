#include<bits/stdc++.h>
using namespace std;
using namespace std;

int main(){
	

	int n;
	cin>>n;
	int a[n];
	int c2=0,c5=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		while(a[i]%2==0 && a[i]>0){
			c2++;
			a[i]/=2;
		}

		while(a[i]%5==0 && a[i]>0){
			c5++;
			a[i]/=5;
		}
	}
	cout<<min(c2,c5)<<endl;

		





	return 0;
}