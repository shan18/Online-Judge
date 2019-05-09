#include <bits/stdc++.h> 
#include<iostream>
#include<string.h>
using namespace std; 


int main() 
{   int n;
cin>>n;
string s;
string sDheeraj= "dheeraj";
string sRanjeet= "ranjeet";
int valueDheeraj=0;
int valueRanjeet=0;
int score_dheeraj=0;
int score_ranjeet=0;
int dlen=sDheeraj.length();
for(int j=0;j<dlen;j++)
     {
         valueDheeraj+=sDheeraj[j]-96;

     }
     for(int j=0;j<sRanjeet.length();j++)
     {
         valueRanjeet+=sRanjeet[j]-96;

     }
 //cout<<valueRanjeet<<endl;


 for(int i=0;i<n;i++)
 {  int temp=0;
     cin>>s;
     for(int j=0;j<s.length();j++)
     {
         temp+=s[j]-96;

     }
  // cout<<temp<<endl;

     if(temp==valueDheeraj)
     {
         score_dheeraj++;
     }
     else if(temp==valueRanjeet)
     {
          score_ranjeet++;
     }
   // cout<<score_dheeraj<<endl;
    //cout<<score_ranjeet<<endl;
 }
 if(score_dheeraj>score_ranjeet)
 cout<<"dheeraj";
 else cout<<"ranjeet";


    return 0; 
} 