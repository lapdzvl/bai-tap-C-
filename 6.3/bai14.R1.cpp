#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,d;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	double dtb=1.0*(a+b+c*2+d*3)/7;
	if(dtb>=8){
		printf("GIOI");
	}
	else if(dtb<8.0&&dtb>=6.5){
		printf("KHA");
	}
	else if(dtb<6.5&&dtb>=5.0){
		printf("TRUNG BINH");
	}
	else{
		printf("YEU");
	}
	
}
