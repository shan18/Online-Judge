#include<iostream>
#define ll long long
using namespace std;

class x
{
    public:
        ll int n,sum=0;
        void scan()
        {
               cin>>n;
               ll int i,a[n];
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
        }
        void print()
        {
            cout<<sum<<endl;
        }
};

int main()
{
    class x a;
    a.scan();
    a.print();
}
