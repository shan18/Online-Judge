#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	vector <int> v;
	int k=0;
	v.push_back(2);
	for(int i=3;i<=n;i++){
		for(int j=2;j<=(i/2+1);j++)
			if(i%j==0) break;
			else if(j==i/2+1){
				v.push_back(i);
			}
		}
		int x[70]={0};
		for(int i=0;i<v.size();i++){
			for(int j=2;j<=n;j++){
			    int h=j;
				while(h%v[i]==0){
					h=h/v[i];
					x[v[i]-1]++;
				}
			}
		}
		int p=1;
		for(int i=0;i<70;i++){
			if(x[i]>0) p=p*(x[i]+1);
		}
		cout<<p;
	}
