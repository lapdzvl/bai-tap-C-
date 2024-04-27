#include<stdio.h>
int main(){
	int a1,a2,a3,b1,b2,b3,n;
	scanf("%d%d%d%d%d%d%d",&a1,&a1,&a3,&b1,&b2,&b3,&n);
	int hc=b1+b2+b3, cup=a1+a2+a3;
	int ke1,ke2;
	if(cup%5==0){
		ke1=cup/5;
	}
	else{
		ke1=cup/5+1;
	}
	if(hc%10==0){
		ke2=hc/10;
	}
	else{
		ke2=hc/10+1;
	}
	if(ke1+ke2<=n){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}
