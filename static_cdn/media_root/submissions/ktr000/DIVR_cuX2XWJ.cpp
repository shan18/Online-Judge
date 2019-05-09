#include<iostream>
#define ll long long
using namespace std;

int main()
{
    ll int t,j,n,i;
    cin>>t;

    for(i=0;i<t;i++)
    {
        int y=1,x=0;
        cin>>n;
        for(j=1;j<=n;j++)
        {

            if(n%j==0)
            {
                if(y==n/j)
                   {
                       x=2*x;
                   }
                y=n/j;

             x++;
            }
        }
        cout<<x<<endl;
    }
}
