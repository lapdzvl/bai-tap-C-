#include<stdio.h>
#include<math.h>
int main(){
	int k2,k3,k5,k6;
	scanf("%d%d%d%d",&k2,&k3,&k5,&k6);
	int k256=fmin(k2,fmin(k5,k6));
	int k32=fmin(k3,k2-k256);
	long long res =1ll*256*k256+1ll*k32*32;
	printf("%lld",res);
	return 0;
}
