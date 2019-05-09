#include <bits/stdc++.h> 
using namespace std; 

int stringValue(String )
{ 
    int temp=0;
for(int x=0;x<strlen(s);x++)
     {
         temp+=s[x]-96;

     }
     return temp;
}

int main() 
{   int n;

cin>>n;
String s;
String sDheeraj= "dheeraj";
String sRanjeet= "ranjeet";
int valueDheeraj;
int valueRanjeet;
int score_dheeraj=0;
int score_ranjeet=0;
for(int j=0;j<strlen(sDheeraj);j++)
     {
         valueDheeraj+=sDheeraj[j]-96;

     }
     for(int j=0;j<strlen(sRanjeet);j++)
     {
         valueRanjeet+=sRanjeet[j]-96;

     }



 for(int i=0;i<n;i++)
 {  int temp=0;
     cin>>s;
     for(int j=0;j<strlen(s);j++)
     {
         temp+=s[j]-96;

     }

     if(temp==valueDheeraj)
     {
         score_dheeraj++;
     }
     else if(temp==valueRanjeet)
     {
          score_ranjeet++;
     }
    
 }
 if(score_dheeraj>score_ranjeet)
 cout<<"dheeraj";
 else cout<<"ranjeet";


    return 0; 
} 
