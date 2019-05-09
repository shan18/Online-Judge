#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vp;
	int n,count=0;
	cin>>n;
	for(int i=2;i<=n;i++){
	    count=0;
	    for(int j=i-1;j>=2;j--){
	        if(i%j==0) break;
	        else if(j==2) vp.push_back(i);
	    }
	}
	vp.push_back(2);
	 int x[70]={0};
	for(int i=0;i<vp.size();i++){
	    for(int j=2;j<=n;j++){
	        int h=j;
	        while(h%vp[i]==0){
	            h=h/vp[i];
	            x[vp[i]-1]++;
	        }
	    }
	}
	long long int p=1;
	for(int i=0;i<70;i++){
	    if(x[i]>0) p=p*(x[i]+1);
	}
	cout<<p;
	return 0;
}
