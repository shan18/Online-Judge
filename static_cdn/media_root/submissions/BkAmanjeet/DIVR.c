#include<stdio.h>
void div(int t);
int main()
{ int t,i;
long long int n;
scanf("%d",&t);
for(i=0;i<t;i++)
{scanf("%I64d ",&n);
 div(n);
}
}
void div(int n)
{ int i,p=0;
for(i=1;i<=n/2;i++)
 {if(n%i==0)
  p++;
 }
 printf("%d \n",p+1);
}
