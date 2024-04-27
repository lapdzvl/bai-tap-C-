//nam nhuan : chia het cho 400 hoac chia het cho 4 vaf khong chia het cho 100
#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	if((x%400)==0||(x%4)==0&&(x%100)!=0){
		printf("nam nhuan");
	}
	else{
		printf("ko nhuan");
		
	}
}
