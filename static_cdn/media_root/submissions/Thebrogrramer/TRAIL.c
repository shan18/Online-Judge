#include<stdio.h>
int main(){
	int n,i,cnt=0;
	scanf("%d",&n);
	long long int a[n],pro=1;
	for(i=0;i<n;++i){
	scanf("%lld",&a[i]);
	pro*=a[i];
	}
	while(pro%10==0){
	++cnt;
	pro/=10;
	}
printf("%d",cnt);
}
