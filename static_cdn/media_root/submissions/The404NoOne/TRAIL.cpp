#include<iostream>
#include<algorithm>
using namespace std;

int findtwo(int x)
{  int count=0;
    while(true)
    {
        if(x%2==0)
        {x=x/2;
        count++;
        }
        else break;
    }
    return count;
}


int findfive(int x)
{  int count=0;
    while(true)
    {
        if(x%5==0)
        {x=x/5;
        count++;
        }
        else break;
    }
    return count;
}


int main(){
    int n;
  cin>>n;
  long long x;
   int no_of_2=0,no_of_5=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        no_of_2+=findtwo(x);
        no_of_5+=findfive(x);
        //cout<<no_of_2<<endl;
     // cout<<no_of_5<<endl;
    }
    if(no_of_2<=no_of_5)
    cout<<no_of_2;

    else cout<<no_of_5;
   }