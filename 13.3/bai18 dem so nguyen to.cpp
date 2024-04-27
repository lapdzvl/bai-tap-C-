#include<stdio.h>
int main(){
	long long n;
	scanf("%lld",&n);
	long long dem=0;
	int du;
	while(n!=0){
		du=n%10;
		if(du==2 || du==3 || du==5 || du==7){
			++dem;
		}
		n/=10;
	}
	printf("%lld",dem);
	
}
