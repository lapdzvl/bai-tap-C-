#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int min, max=n;
	if(n%2==0)
		min=n/2;
	else
	min=n/2+1;
	int res=(min+m-1)/m*m;
	if(res<=max){
		printf("%d",res);
	}
	else{
		printf("-1");
	}
	return 0;
}
