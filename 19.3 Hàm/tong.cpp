#include<stdio.h>
double tong(int n){
	double res=0;
	for(int i=1;i<=n;i++){
		res+=(double)1/i;
	}
	return res;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%.2lf",tong(n));
}
