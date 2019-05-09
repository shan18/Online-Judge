
 #include <iostream>
using namespace std;
int count(int a[],int n);


int main() {
	int n=0;
	  cin >> n;
	  int a[n]; 
	for (int i = 0; i < n; ++i){
    cin >> a[i];
		}
    cout << count(a, n); 
    return 0; 
}

int count(int a[], int n){ 
    int count2 = 0, count5 = 0; 
    for (int i = 0; i < n; i++) { 
  
        // count number of 2s in each element 
        while (a[i] % 2 == 0) { 
            a[i] = a[i] / 2; 
            count2++; 
        } 
  
        // count number of 5s in each element 
        while (a[i] % 5 == 0) { 
            a[i] = a[i] / 5; 
            count5++; 
        } 
    } 
    // return the minimum 
    return (count2 < count5) ? count2 : count5; 
}


