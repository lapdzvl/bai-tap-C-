#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int nhan=n*2;
	long long nhanmuoi=(long long)n*10;
	int chia=(int)n/2;
	double chiadu=(double)n / 2;
	 
	
		printf("%d\n\n%lld\n\n%d\n\n%.3lf",nhan,nhanmuoi,chia,chiadu);
}
