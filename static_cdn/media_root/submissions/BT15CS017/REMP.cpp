#include<bits/stdc++.h> 
using namespace std; 
  
void assign(int a[], int n) 
{ 
    // Sort the array 
    sort(a, a + n); 
  
    int result[n];  
    int p = 0, q = n - 1,sum=0;
    for (int i = 0; i < n; i++)  
    { 
        if ((i + 1) % 2 == 0) 
            result[i] = a[q--]*2; 

        else
            result[i] = a[p++]; 
    } 
    for (int i = 0; i < n; i++)  
        {
            sum += result[i];
        }
        cout<< sum ;
}
int main(){
    int n;
    int a[];
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    assign(a,n);
} 
  