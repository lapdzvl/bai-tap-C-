#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,n;
	scanf("%d%d%d%d",&a,&b,&c,&n);
	int tong=a+b+c+n;
	if(tong%3==0){
		int res=tong/3;
		if(res>=a && res>=b && res>=c){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	else{
		printf("NO\n");
	}
}
