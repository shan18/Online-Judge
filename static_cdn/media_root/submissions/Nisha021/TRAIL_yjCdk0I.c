#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()

{
    int  n,i,p=1,l=0;
    int *arr;
    scanf("%d",&n);
    arr = ( int*) malloc(10000*n* sizeof( int));

    for(i=0;i<n;i++)
        scanf("%d",(arr+i));
         for(i=0;i<n;i++)
            p=p * (*(arr+i));
         while(p%10==0)
         {
             l++;
             p=p/10;
         }
         printf("%d",l);

         return 0;

}
