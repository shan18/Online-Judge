#include <bits/stdc++.h> 
using namespace std; 


int main() 
{   int n;

cin>>n;
string s;
string sDheeraj= "dheeraj";
string sRanjeet= "ranjeet";

int score_dheeraj=0;
int score_ranjeet=0;

 for(int i=0;i<n;i++)
 {  int temp=0;
     cin>>s;
     for(int j=0;j<s.length();j++)
     {
         temp+=s[j]-96;

     }
    // cout<<temp<<endl;

     if(temp==51)
     {
         score_dheeraj++;
     }
     else if(temp==73)
     {
          score_ranjeet++;
     }
    
 }
 
 if(score_dheeraj>score_ranjeet)
 cout<<"dheeraj";
 else if(score_dheeraj==score_ranjeet)
 	cout<<"draw";
 else cout<<"ranjeet";


    return 0; 
} 
