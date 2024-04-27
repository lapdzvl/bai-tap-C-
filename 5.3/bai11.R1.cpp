#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a>0 && b>0 && c>0) && a==b==c){
		printf("1\n");
	}
	else{
		printf("INVALID\n");
	}
	if((a>0 && b>0 && c>0) && a==c || a==b || b==c){
		printf("2\n");
	}
	else{
					printf("INVALID\n");

	}

	if( (a>0 && b>0 && c>0) && b*b-a*a-c*c==0){
		printf("3\n");
	}
	else{
			printf("INVALID\n");
	}
	
}
