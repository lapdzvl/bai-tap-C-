#include<stdio.h>

int s( int n){
	if(n==0)
	return 0;
	else
	return n+s(n-1);
	
}
int main(){
	printf("%d",s(6));
	return 0;
}
