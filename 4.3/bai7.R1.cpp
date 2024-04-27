#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int so1=a/b*b;
	int so2=(a+b-1)/b*b;
	printf("%d\n%d",so1,so2);
}
