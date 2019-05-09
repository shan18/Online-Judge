#include<iostream>
#define ll long long
using namespace std;

int fact(ll int n)
{
    if(n==0||n==1)
        return 1;
    else{
        return(n*fact(n-1));
    }
}

int main()
{
    ll int n;
    cin>>n;
    n=fact(n);
     int y=1,x=0,j;
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
