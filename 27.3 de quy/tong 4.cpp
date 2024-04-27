#include<stdio.h>
int tong(int n){
	
	
		
		if(n%2==0){
			return n/2;
		}
		else{
			return (n-1)/2-n;
		}
		
	}
	

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",tong(n));
	return 0;
}
