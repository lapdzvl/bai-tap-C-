#include<stdio.h>
#include<math.h>
int main(){
	int n,u1,d;
	scanf("%d%d%d",&n,&u1,&d);
	long long s=1ll*n*u1+(1ll*n*(n-1)/2)*d;
	printf("%lld",s);
}
