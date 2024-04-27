#include<stdio.h>
#include<math.h>
int main(){
	long long n;
	scanf("%lld",&n);
	long long sum=0;
		for(int i=1;i<=sqrt(n);i++){
		
			sum=1ll*i*i;
			printf("%lld ",sum);
			
		}
	
}
