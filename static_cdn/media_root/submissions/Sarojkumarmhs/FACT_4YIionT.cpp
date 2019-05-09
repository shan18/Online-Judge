
#include<iostream>
 
using namespace std;
 
int main()
{
	 int i,fact=1,number;    
    
 cin>>number;    
  for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
	long int n;
	int j;
	
	 n=fact;
//	cout<<endl<<"Divisors of "<<n<<" are";
 	int count=0;
	for(j=1;j<=n;++j)
	{
		if(n%j==0){
	
			count++;
			}
	}
 cout<<count;
	return 0;
}
