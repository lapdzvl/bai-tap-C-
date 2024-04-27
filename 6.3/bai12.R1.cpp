#include<stdio.h>
int main(){
	int t,n;
	scanf("%d%d",&t,&n);
	if(t>0&&t<=12&&n>0){
		if(t==1 || t==3 ||t==5 ||t==7 ||t==8 ||t==10 ||t==12 ){
			printf("31");
		}
		else if(t==4 ||t==6 ||t==9 ||t==11 ){
			printf("30");
		}
		else{
			if(n%400==0 || n%4==0 && n%100!=0){
				printf("29");
			}
			else{
				printf("28");
			}
		}
	}
	else{
		printf("INVALID");
	}
}
