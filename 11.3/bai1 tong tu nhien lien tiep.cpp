#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	long long tong=0;
	for(int i=1;i<=n;i++){
		tong+=i;
	}
	printf("%lld",tong);
	return 0;
}
