#include<stdio.h>
int main(){
	int a,b,c ;
	scanf("%d%d%d",&a,&b,&c);
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a){
		printf("YES\n");
	}
	else{
		printf("NO");
	}
	return 0;
}
