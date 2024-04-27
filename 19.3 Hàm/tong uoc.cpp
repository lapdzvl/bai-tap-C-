#include<stdio.h>
void tong(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			sum+=i;
			
		}
	}

printf("%d",sum);
}
int main(){
	int n;
	scanf("%d",&n);
	tong(n);
}
