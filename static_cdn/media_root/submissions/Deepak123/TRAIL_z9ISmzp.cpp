#include<iostream>
using namespace std;
int main()
{
	int n,h=0;
	long s=1;
	cin>>n;
	cout<<endl;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	//	cout<<" ";
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
