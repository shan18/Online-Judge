#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll int n;
    cin>>n;
               ll int i,a[n],sum=0;
               for(i=0;i<n;i++)
               {
                   cin>>a[i];
                   if(i%2==0&&a[i]%2==0)
                   {
                       sum=sum+2*a[i];
                   }
                   else
                   {
                       sum=sum+a[i];
                   }
               }
               cout<<sum;
}
