#include<stdio.h>

int tong(int n){
	if(n==0){
		return 0;
	}
	else{
		return n*(n+1)*(2*n+1)/6;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",tong(n));
	return 0;
}
