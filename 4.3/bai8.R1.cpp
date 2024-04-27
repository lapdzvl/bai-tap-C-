#include<stdio.h>
int main(){
	int a, b;
	scanf("%d%d",&a,&b);
	int tong=a+b;
	printf("%d\n",tong);
	int hieu=a-b;
	printf("%d\n",hieu);
	long long tich=1ll*a*b;
	printf("%lld\n",tich);
		if(b==0){
		printf("INVALID\n");
	}
	else{
		double thuong=(double)a/b;
		printf("%.4lf",thuong);
		
	}
return 0;

	
	
}
