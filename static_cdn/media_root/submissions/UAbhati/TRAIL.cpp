#include<bits/stdc++.h>
using namespace std;
int main()
{
	long  n,i,count=0,a[100000];
        long long pro=1;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	    pro*=a[i];
 
	}
	while(pro%10==0)
	{
		count++;
		pro=pro/10;
	}
	cout << count;
	
	return 0;
}
