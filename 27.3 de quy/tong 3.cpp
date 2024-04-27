#include<stdio.h>
#include<math.h>
long long tong(int n){
	if(n==0){
		return 0;
	}
	else{
		long long sum=1ll*pow((n*(n+1))/2,2);
		return sum;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%lld",tong(n));
	return 0;
}
