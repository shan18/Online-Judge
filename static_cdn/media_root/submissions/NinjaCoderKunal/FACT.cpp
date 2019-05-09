#include<iostream>
using namespace std;
int main()
{
	long long int n,i,p,pow,res,b[20],a[20]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67};
	cin>>n;
	for(i=0;a[i]<=n;++i)
	{
		p=a[i];
		pow=0;
		while(p<=n)
		{
			pow=pow+(n/p); 
            p*=p;
		}
		res=res*(pow+1);
	}
	cout<<res;
	return 0;
}
