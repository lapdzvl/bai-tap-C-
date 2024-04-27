#include<stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	if(c==90 || c==122){
		printf("a");
	}
	else if(c>='A' &&c<='Z'){
		c+=32;
		printf("%c",c+1);
	}
	else{
		
		printf("%c",c+1);
	}
}
