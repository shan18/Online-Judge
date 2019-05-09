#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,j,i;
   long long n;
   cin >> t; 
   for(i=0;i<t;i++)
      {    
           int count=2;
	       cin >> n;
           if(n==1 || n==0)  cout << 1;
           else  {
		         for(j=2;j<=n/2;j++)  
		            {
		            	if(n%j==0)
		            	   count++;
					}
				 cout << count << endl;	
		       }
     }

return 0;
}

