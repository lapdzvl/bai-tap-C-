#include<stdio.h>
#include<math.h>
	
	int test(int n){
		int mu;
		for(int i=2;i<=sqrt(n);i++){
				while(n%i==0){
			++mu;
			n/=i;
		}
	
		}
	}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d ",test(n));
}
	
