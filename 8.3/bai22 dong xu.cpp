#include<stdio.h>
int main(){
	long long n,S;
	scanf("%lld%lld",&n,&S);
	if(S%n==0){
		printf("%lld",S/n);
	}
	else{
		printf("%lld",S/n+1);
	}
	return 0;
}
