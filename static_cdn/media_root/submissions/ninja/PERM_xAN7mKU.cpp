#include<bits/stdc++.h>
using namespace std;
main(){
int n;
cin>>n;
set<int> s;
int num;
for(int i=1;i<=n;i++){
	cin>>num;
	s.insert(num);
}
int a=s.size();
cout<<a-1;


}
