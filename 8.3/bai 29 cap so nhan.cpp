#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if(b%a==0){
		if(b/a*b==c && b/a*c==d){
			printf("YES");
		}
		else{
			printf("NO");
		}
	}
	else{
		printf("NO");
	}
}
