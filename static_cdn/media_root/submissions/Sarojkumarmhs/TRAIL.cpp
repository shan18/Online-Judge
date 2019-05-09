#include <iostream> 
using namespace std; 
  

int zeros(int a[], int n);
  
int main() 
{ 
	int f;
	cin>>f;
    int a[f];
    for(int i=0;i<f;i++){
    	cin>>a[i];
	}
    int n = sizeof(a) / sizeof(a[0]); 
    cout << zeros(a, n); 
    return 0; 
} 
int zeros(int a[], int n) 
{ 
    int c1 = 0, c2 = 0; 
    for (int i = 0; i < n; i++) { 
  
        
        while (a[i] % 2 == 0) { 
            a[i] = a[i] / 2; 
            c1++; 
        } 
  

        while (a[i] % 5 == 0) { 
            a[i] = a[i] / 5; 
            c2++; 
        } 
    } 

    return (c1 < c2) ? c1 : c2; 
} 
