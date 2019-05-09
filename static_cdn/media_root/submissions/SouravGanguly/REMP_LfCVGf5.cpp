#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n,i,j,k,l=0;
    long int a[100000],q;
    long long int sum=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin>>q;
         sum+=q;
        if(q%2==0)
        {
            a[l]=q;
            ++l;
        }
        
    }
    sort(a,a+l);
    k=l-n/2;
    for(i=l-1;(i>=k)&&(k>=0);i--)
    sum+=a[i];
    cout<<sum;
}
