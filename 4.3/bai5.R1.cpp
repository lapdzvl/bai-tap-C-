#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int diema=c-a;
	int diemb=d-b;
	int binha=(int)pow(diema,2);
	int binhb=(int)pow(diemb,2);
	double can=(sqrt(binha+binhb));
	printf("%.2lf",can);
}
