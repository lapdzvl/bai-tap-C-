#include<stdio.h>
void change(int n){
	n+=100;
	printf("%d\n",n);
}
int main(){
	int a=200;
	change(a);
	printf("%d",a);
}
