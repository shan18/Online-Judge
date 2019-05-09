#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,x;
    cin>>n>>x;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long s=x;
    int i=0;
    while(i<n && s>0){
        s-=a[i];
        i++;
    }
    cout<<i<<endl;
    
    
    
    return 0;
}