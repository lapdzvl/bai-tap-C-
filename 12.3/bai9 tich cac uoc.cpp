#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	long long tich=1;
		for(int i=1;i<=n;i++){
			if(n%i==0)
			tich*=i;
		}
					printf("%lld",tich);				
		}
	

