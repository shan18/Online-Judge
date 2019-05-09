#include <bits/stdc++.h>
#include<string.h>
#define MAX 1000005
#define MOD 1000000007
#define MA 1200000
#define PI 3.14159265358979323846264338327950
//const int  MAXA=1e15+1;
typedef long long int ll;
const int INF=1e6;
using namespace std;
const  int maxn=1e5+5;
const int N=1e8;
const int big = 1;
int a[maxn];
int main()
{
    //freopen("input.txt","r+",stdin);
    //freopen("output.txt","w+",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n,k,p,i;
    cin>>t;
    while(t--)
    {
        int f=0;
        cin>>n>>k>>p;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=0;i<=n-k;i++)
        {
            if(a[i+k-1]-a[i]<=2*p)
            {
                f=1;
                break
            }
 
        }
        if(f)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
