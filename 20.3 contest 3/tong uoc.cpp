#include<stdio.h>
#include<math.h>

long long tong(long long n){
	long long sum=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			sum+=i;
			if(i!=n/i){
				sum+=n/i;
			}
		}
	}
	return sum;
}
int main(){
	long long n;
	scanf("%lld",&n);
	printf("%lld",tong(n));
	return 0;
}
