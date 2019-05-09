#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,x;
    ifstream input;
    ofstream output;
    
    string ss1,ss2;
    cin>>ss1>>ss2;
    input.open(ss1);
    output.open(ss2);
    // int n,x;
    input>>n;
    long long a[n];
    input>>x;
    for(int i=0;i<n;i++){
    	long long y;
    	input>>y;
    	a[i]=y;
    }




    
    long long s=x;
    int i=0;
    while(i<n && s>0){
        s-=a[i];
        i++;
    }
    output<<i<<endl;
    
    
    
    return 0;
}