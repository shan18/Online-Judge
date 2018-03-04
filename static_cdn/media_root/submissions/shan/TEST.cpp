/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, "<< name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
int vis[1002][1002];
int mat[1002][1002];
int bfs(int a,int b)
{
    vis[a][b]=1;
    int count=1;
    queue<pair<int,int> >q;
    q.push(make_pair(a,b));
    while(!q.empty())
    {
        int c=q.front().first;
        int d=q.front().second;
        q.pop();
        for(int i=-1;i<=1;i++)
        {
            for(int j=-1;j<=1;j++)
            {
                if(!vis[c+i][d+j] && mat[c+i][d+j])
                {
                    count++;
                    vis[c+i][d+j]=1;
                    q.push(make_pair(c+i,d+j));
                }
            }
        }
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        memset(vis,0,sizeof(vis));
        memset(mat,0,sizeof(mat));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>mat[i][j];
            }
        }
        int ans=0,count=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(!vis[i][j] && mat[i][j])
                {
                    ans=max(ans,bfs(i,j));
                    count++;
                }
            }
        }
        cout<<count<<' '<<ans<<endl;
    }
}
