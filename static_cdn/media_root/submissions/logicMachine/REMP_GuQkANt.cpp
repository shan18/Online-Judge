#include<iostream>
using namespace std;
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition (int arr[], int low, int high) 
{ 
    long int pivot = arr[high];    
    int i = (low - 1); 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        if (arr[j] <= pivot) 
        { 
            i++;    
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        long int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
int main()
{
	long int n,count=0;
	cin>>n;
	long int a[n];
	for(long int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		count++;
	}
	int b[count],j=0,c[n-count],k=0;
	for(long int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			c[k]=a[i];
			k++;
		}
	}
	quickSort(b,0,count-1);
//	for(int i=0;i<count;i++)
//	cout<<b[i]<<"  ";
    long int sum=0;
    long int count1=count;
	if(count>n/2)
	{
		for(long int i=0;i<n/2;i++)
		{
			sum=sum+2*b[count-1];
			count--;
		}
		count--;
	    for(long int i=count;i>=0;i--)
	    sum=sum+b[count];
	    for(long int i=0;i<n-count1;i++)
	    sum=sum+c[i];
	}
	else
	{
		for(long int i=0;i<count;i++)
		sum=sum+2*b[i];
		for(long int i=0;i<n-count;i++)      
		sum=sum+c[i];
	}  
	cout<<sum;
	
}












