#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{int t,l,cnt=0;
cin>>t;
 long long int i,n,a,b;
while(t--)
{  cin>>n>>a>>b;
long long int x[n];
for(i=0;i<n;i++)
cin>>x[i];
sort(x,x+n);
for(int j=0;j<n-a+1;j++)
    {
        if((x[j+a-1]-x[j])==2*b)
        {if(t==0)
         cout<<"NO";
         else cout<<"NO ";
        cnt=1;
        break;}
    }
if(cnt==0)
{if(t==0)
    cout<<"YES";
else cout<<"YES ";
}
}
}