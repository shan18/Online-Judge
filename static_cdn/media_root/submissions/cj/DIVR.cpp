#include<iostream>
#include<vector>
using namespace std;
vector<int> factors(int n) {
vector<int> f;
for (int x = 2; x*x <= n; x++) {
while (n%x == 0) {
f.push_back(x);
n /= x;
}
}
if (n > 1) f.push_back(n);
return f;
}
main(){
int t;
cin>>t;
int s[t];
for(int i=0;i<t;i++) cin>>s[i];
for(int i=0;i<t;i++){
vector<int > v=factors(s[i]);
vector<int> k;
//for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
//cout<<endl;
for(int i=0;i<v.size();i++){
int count=1;
if(i+1<v.size()){
 int j=i+1;
while(v[i]==v[j]) count++,j++;
i=j-1;
}
k.push_back(count);
//cout<<v[i]<<" "<<count<<endl;
//cout<<i<<"i "<<v[i]<<endl;
}
//for(int i=0;i<k.size();i++) cout<<k[i]<<" ";
//cout<<endl;
int m=1;
for(int i=0;i<k.size();i++) m=m*(k[i]+1);
cout<<m<<"\n";
v.clear();
k.clear();
}
}
