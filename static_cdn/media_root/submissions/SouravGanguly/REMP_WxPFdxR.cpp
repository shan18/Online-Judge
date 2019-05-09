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
        if(q%2==0)
        {
            a[l]=q;
            ++l;
        }
        else
        sum+=q;
    }
    sort(a,a+l);
    for(i=l-1;i>=l-n/2;i--)
    sum+=(2*a[i]);
    for(;i>=0;i--)
    sum+=(a[i]);
    cout<<sum;
}
