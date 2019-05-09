#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int x,j,i,n,d=0,r=0,sum=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
        sum=0;
        string a;
        cin>>a;
        j=0;
        while(a[j]!='\0')
        {
            sum=sum+int(a[j])-96;
            j++;
        }
        if(sum==51)
        {
            d++;
        }
        else if(sum==73)
        {
            r++;
        }

    }
    if(d>r)
    {
        cout<<"dheeraj"<<endl;
    }
    else
    {
        cout<<"ranjeet"<<endl;
    }
}
