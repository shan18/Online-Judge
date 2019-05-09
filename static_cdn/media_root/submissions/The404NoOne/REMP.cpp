#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0,sum=0;
    long long x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
   sort(x,x+n,greater<int>());
   for(int i=0;i<n;i++)
   {
     if((x[i]%2==0)&& count<=(n/2))
     {
         sum+=x[i]*2;
         count++;

     }
     sum+=x[i];
   }


}