#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int sochai=n/28;
	int vochai=sochai;
	while(n>=3){
	int	doi=vochai/3;
		sochai+=doi;
		vochai=vochai%3+doi;
	}
	printf("%d",sochai);
	return 0;
}
