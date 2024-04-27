#include<stdio.h>
int main(){
	long long n,a,b;
	scanf("%lld%lld%lld",&n,&a,&b);
		if(a*2<=b){
			printf("%lld",n*a);
		}
		else{
			if(n%2==0){
				printf("%lld",n/2*b);
			}
			else{
				printf("%lld",n/2*b+a);
			}
		}
}
