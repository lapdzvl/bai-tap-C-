#include<stdio.h>
int main(){
	long long n;
	scanf("%lld",&n);
	long long dem=0;
	while(n!=0){
		++dem;
		n/=10;
	}
	printf("%lld",dem);
}
	 


