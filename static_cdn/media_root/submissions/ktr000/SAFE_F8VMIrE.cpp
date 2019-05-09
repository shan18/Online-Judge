#include<iostream>
using namespace std;

int main()
{
    int i,T;
    cin>>T;

    for(i=0;i<T;i++)
    {
        int n,A,b,j;
        cin>>n>>A>>b;
        int a[n];
        cin>>a[0];
        int max=a[0];
        int min=a[0];
        for(j=1;j<n;j++)
        {
            cin>>a[j];
            if(a[j]>max)
            {
                max=a[j];
            }
            if(a[j]<min)
            {
                min=a[j];
            }
        }


        int k,count=0,max2;
        max2=min+2*b;

      do
     {
         count=0;
        for(j=0;j<n;j++)
        {
            if(a[j]<=max2&&a[j]>=min)
            {
                count++;
            }
        }

        if(count>=A)
            {
             cout<<"NO"<<endl;
             break;
            }
        if(max2>=max)
        {
            cout<<"YES"<<endl;
            break;
        }
        min++;
        max2++;
     }while(max2<max);
    }
}
