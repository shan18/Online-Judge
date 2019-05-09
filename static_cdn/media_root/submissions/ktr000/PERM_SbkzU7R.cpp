#include<iostream>
using namespace std;

int main()
{
  int j,i,n,x=0;
  cin>>n;
  int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                x++;
            }
        }
    }
    if(x>0)
        x=x-1;

    cout<<n-x-1;
}
