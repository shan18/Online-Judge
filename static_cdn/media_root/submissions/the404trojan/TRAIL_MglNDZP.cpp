#include<iostream>
#include<algorithm>
using namespace std;

int nooftwo(int z)
{  int counttwo=0;
    while(true)
    {
        if(z%2==0){
		z=z/2;
        counttwo++;
        }
        else break;
    }
    return counttwo;
}


int nooffive(int y)
{  int countfive=0;
    while(true)
    {
        if(y%5==0){
		y=y/5;
        countfive++;
        }
        else break;
    }
    return countfive;
}


int main(){
    int n;
  cin>>n;
  long long x;
   int no_of2=0,no_of5=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        no_of2+=nooftwo(x);
        no_of5+=nooffive(x);
    }
    if(no_of2<=no_of5)
    cout<<no_of2;

    else cout<<no_of5;
    return 0;
   }
