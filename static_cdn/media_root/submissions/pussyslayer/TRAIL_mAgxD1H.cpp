#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count1=0,count2;
	cin>>n;
	long int arr[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
		while(1)
		{
			if(arr[i]%2==0)
			{
				count1++;
				arr[i]/=2;
			}
			else
			{
				break;
			}
		}
			while(1)
		{
			if(arr[i]%5==0)
			{
				count2++;
				arr[i]/=5;
			}
			else
			{
				break;
			}
		}
	}
	cout<<min(count1,count2);
	return 0;
}
