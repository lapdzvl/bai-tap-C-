#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("VO SO NGHIEM");
			}
			else{
				printf("VO NGHIEM");
			}
		
			}
			else{
				double de=-c/b; 
					if(de==0){
						printf("0.00");
					}
					else{
						printf("%.2lf",de);
					}
				
			}
		
			}
	else{
		double d=b*b-4*a*c;
		if(d<0){
			printf("VO NGHIEM");
		}
		else if(d==0){
			printf("%.2lf",-b/(2*a));
		}
		else{
			printf("%.2lf %.2lf",(-b-sqrt(d))/(2*a) ,(-b+sqrt(d))/(2*a));
		}
		
	}
}
