#include<iostream>
#define ll long long
using namespace std;

int main()
{
    ll int t,j,n,i;
    cin>>t;

    for(i=0;i<t;i++)
    {
    int x=0;
        cin>>n;
        for(j=1;j<=n;j++)
        {
            if(n%j==0)
            {
             x++;
            }
        }
        cout<<x<<endl;
    }
}
