#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int dem=0;
	long long sum=0;
		for(int i=1;i<=n;i++){
			if(n%i==0)
			++dem;
	
		}
			printf("%d\n",dem);
	for(int i=1;i<=n;i++)
			if(n%i==0){
					sum=i;
			printf("%lld ",sum);
			
			}
		
			
		}	

