#include<stdio.h>

int sum(int n){
	if(n==0){
		return 0;
	}
	else{
		return n*(n+1)/2;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d", sum(n));
	return 0;
}
