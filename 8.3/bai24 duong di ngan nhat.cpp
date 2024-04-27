#include<stdio.h>
#include<math.h>
int main(){
	int d1,d2,d3;
	scanf("%d%d%d",&d1,&d2,&d3);
	int kc1=d1+d2+d3;
	int kc2=2*(d1+d2);
	int kc3=2*(d2+d3);
	int kc4=2*(d1+d3);
	int res=fmin(fmin(kc1,kc2),fmin(kc3,kc4));
	printf("%d",res);
	return 0;
}

