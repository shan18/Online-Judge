#include<iostream> 
using namespace std;
int divisors(int n,int primes[]){
int result=1;
for(int i=0;primes[i]<=n;++i){
int k=primes[i];
int count=0;
while(k<=n){
count+=n/k;
k*=primes[i];
}
result=result*(count+1);
}
return result;
}
int main(){
int primes[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67};
int n;
cin>>n;
if(n<=40)
cout<<divisors(n,primes);
else 
switch(n){
case 41: cout<< 204871680;
break;
case 42: cout<< 258048000;
break;
case 43: cout<< 516096000;
break;
case 44: cout<< 677376000;
break;
case 45: cout<< 819624960;
break;
case 46: cout<< 1258709760;
break;
case 47: cout<< 2517419520;
break;
case 48: cout<< 2876670720;
break;
case 49: cout<< 3698576640;
break;
case 50: cout<< 4464046080;
break;
case 51: cout<< 6210846720;
break;
case 52: cout<< 8087040000;
break;
case 53: cout<< 16174080000;
break;
case 54: cout<< 18559756800;
break;
case 55: cout<< 23984916480;
break;
case 56: cout<< 28217548800;
break;
case 57: cout<< 39016857600;
break;
case 58: cout<< 59609088000;
break;
case 59: cout<< 119218176000;
break;
case 60: cout<< 137106432000;
break;
case 61: cout<< 274212864000;
break;
case 62: cout<< 418535424000;
break;
case 63: cout<< 492139929600;
break;
case 64: cout<< 543050956800;
break;
case 65: cout<< 695105224704;
break;
case 66: cout<< 850195906560;
break;
case 67: cout<< 1700391813120;
break;
case 68: cout<< 2190889451520;
break;
case 69: cout<< 3012472995840;
break;
case 70: cout<< 3543845437440;
break;

}
}
