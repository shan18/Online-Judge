#include<bits/stdc++.h>
using namespace std;
struct tree{
	int fm;
	int sm;
}t[3*100000];
int n;
int A[2*100000];

void build(int node, int start, int end)
{
    if(start == end)
    {
        t[node].fm =A[start];
        t[node].sm=0;
    }
    else
    {
        int mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid);
        // Recurse on the right child
        build(2*node+1, mid+1, end);
        // Internal node will have the sum of both of its children
        t[node].fm= max(t[2*node].fm ,t[2*node+1].fm);
        t[node].sm= max(min(t[2*node].fm ,t[2*node+1].fm),max(t[2*node].sm ,t[2*node+1].sm));   
    }
}
pair<int,int> query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
    	pair<int,int> p;
        p.first=0;
        p.second=0;
        return p;
    }
    if(l <= start and end <= r)
    {
        pair<int,int> p;
        p.first=t[node].fm;
        p.second=t[node].sm;
        return p;
    }
    
    int mid = (start + end) / 2;
   pair<int,int> p,p1,p2;
	 p1=(query(2*node, start, mid, l, r));
	p2=(query(2*node+1, mid+1, end, l, r));
    p.first= max(p1.first ,p2.first);
    p.second= max(min(p1.first ,p2.first),max(p1.second ,p2.second)); 
	  
    return p;
    
    
    
//    int  mid=(start+end)/2;
//    if(start<=end)
//    {
//      return  query(2*node,start,mid,l,r);
//    }
//    else if(start>mid)
//      return  query(2*node+1,mid+1,end,l,r);
//    else
//    {
//    	struct tree p;
//   		struct tree p1;
//   		struct tree p2 ;
//		p1= query(2*node, start, mid, l, r);
//		p2= query(2*node+1, mid+1, end, l, r);
//   		p.fm= max(p1.fm ,p2.fm);
//    	p.sm= max(min(p1.fm ,p2.fm),max(p1.sm ,p2.sm));   
//   	    return p;
//   		 
//    }
    
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>A[i];
	}
	build(1,1,n);
	set< pair<int,int> > s;
	pair <int,int> p;
	for(int i=1;i<=n;++i)
	{
		for(int j=i+1;j<=n;++j)
		{
			p=query(1,1,n,i,j);
			//cout<<p.first<<" "<<p.second<<endl;
			s.insert(p);
		}
	}
	cout<<s.size();
	return 0;
}
