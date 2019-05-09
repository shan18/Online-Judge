#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t1; 
	cin>>t1;
	long long int n1,cot;
	while(t1--)
	{
		cin>>n1;
		cot=0;
	for (int z=1; z<=sqrt(n1); z++) 
    { 
        if (n1%z == 0) 
        { 
            if (n1/z == z) 
            	cot++;
            else  
                cot+=2; 
        } 
    } 
    cout<<cot<<endl;
	}
	return 0;
}
