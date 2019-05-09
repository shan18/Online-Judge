#include<iostream>
using namespace std;
int main()
{
	int n,h=0,s=1;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		cout<<" ";
	}
	for(int i=0;i<n;i++)
	{
		s=s*arr[i];
	}
	while(s%10==0)
	{
		s=s/10;
		h++;
	}
	cout<<h;
}
