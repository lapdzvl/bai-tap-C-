#include<stdio.h>
int main(){
	int a,b,k;
	scanf("%d%d%d",&a,&b,&k);
	int trai, phai;
	if(k%2==0){
		trai=phai=k/2;
	}
	else{
		trai= k/2;
		phai=trai+1;
	}
	printf("%lld",1ll*phai*a-1ll*trai*b);
	return 0;
}
