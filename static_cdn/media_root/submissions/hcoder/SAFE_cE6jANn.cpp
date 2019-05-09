#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	   long long int n,a,b,x[100000],x1[100000];
	   cin>>n>>a>>b;
	   for(int i=0;i<=n;i++){
	       cin>>x[i];
	   }
	   sort(x,x+n);
	   for(int i=0;i<n-1;i++){
	       x1[i]=x[i+1]-x[i];
	   }
	   int s=0,count=0,max=0;
	   for(int i=0,j=0;j<n;i++){
	       while(s<2*b&&j<n){
	           s=s+x1[j];
	           j++;
	           count++;
	       }
	       if(j==n) count--;
	       if(count+1>max) max=count+1;
	       s=s-x1[i];
	       count--;
	   }
	   if(max<a) cout<<"YES"<<endl;
	   else cout<<"NO"<<endl;
	}
	return 0;
}
