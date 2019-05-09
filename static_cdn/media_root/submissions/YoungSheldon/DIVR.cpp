#include<bits/stdc++.h>

using namespace std;

long long div(long long n) 
{ 
    long count=0;
    for (long long i=1; i<=sqrt(n); i++) 
    { 
        if (n%i==0) 
        { 
            if (n/i == i)
                count++;
            else{
            	count+=2;
			}
        } 
    }
    return count;
}

int main(){
	ios::sync_with_stdio(false);
	long long n;
	cin>>n;
	while(n){
		long long x;
		cin>>x;
		cout<<div(x)<<"\n";
		n--;
	}
	return 0;
}

