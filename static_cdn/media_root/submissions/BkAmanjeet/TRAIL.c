#include<stdio.h>
int main()
{ 
long int sum=0,n,i,t;
long long int prod=1;
scanf("%ld",&n);
for(i=0;i<n;i++)
{scanf("%ld",&t);
prod=prod*t;
}
while(prod%10==0&&prod>9)
 {sum++;
 prod=prod/10;
}
 printf("%ld",sum);
}
