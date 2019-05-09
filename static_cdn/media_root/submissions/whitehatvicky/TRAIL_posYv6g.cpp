
#include <iostream> 
using namespace std; 
int main()
{ 
    long long int count2 = 0, count5 = 0,i,x,n;
    cin>>n;
    for (i = 0; i < n; i++) { 
        cin>>x;
        while (x % 2 == 0) { 
            x/= 2; 
            count2++; 
        } 
        while (x% 5 == 0) { 
            x/= 5; 
            count5++; 
        } 
    }
    if(count2<count5)
       cout<<count2;
    else cout<<count5;
} 

