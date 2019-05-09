#include<iostream>
using namespace std;

class x
{
    public:
        int n,sum=0;
        void scan()
        {
               cin>>n;
               int i,a[n];
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
                print();

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

}
