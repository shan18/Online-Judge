#include<iostream>
using namespace std;

int main()
{
     int n;
     cin>>n;
     int x,a[n],i,mul=1;
     for(i=0;i<n;i++)
     {
        cin>>a[i];
        mul=mul*a[i];
     }
     i=0;
     while(a[i]!=0)
     {
        x=mul%10;
        mul=mul/10;
        if(x==0){
        i++;
        }
        else
        {break;
        }
     }
     cout<<i;
}
