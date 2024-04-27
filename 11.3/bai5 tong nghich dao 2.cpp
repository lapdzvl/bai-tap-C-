#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	double tong=0;
	for(int i=1;i<=n;i++){
		tong+=1.00000*1/(2*i);
	}
	printf("%.5lf",tong);
}
