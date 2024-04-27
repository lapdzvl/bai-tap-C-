#include<stdio.h>
#include<math.h>
int main(){
	int x;
	scanf("%d",&x);
	long long res=1ll*x*x*x+3*x*x+x+1;
	printf("%lld",res);
}
