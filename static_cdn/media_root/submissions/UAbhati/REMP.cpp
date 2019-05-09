#include<iostream>
using namespace std;
int main()
{
	long int count=0,x,u,j,i,n,a[100000];
	long long int sum=0;
	cin >> n;
	u=(n/2);
	for(i=0;i<n;i++)
	   cin >> a[i];
	
	for (i = 0; i < n; i++)
      {    for (j = i + 1; j < n; j++)
             {         
              if(a[i] < a[j])
                 {
                   x = a[i];
                   a[i] = a[j];
                   a[j] = x;
                 }
              }
      }
    for(i=0;i<n;i++)
       {
       	if(a[i]%2==0 && count<=u)
       	 {
        		sum+=a[i]*2;
        		count++;
            }
           else sum+=a[i];
       }
	cout << sum;
	
	return 0;
}