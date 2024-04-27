#include<stdio.h>
int main(){
	int n;
	int sum=0;
	scanf("%d",&n);
	int dem=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
				++dem;
		}
	
	}
	printf("%d\n",dem);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			 sum+=i;
			 printf("%d",sum);
		}
	}
	
}
