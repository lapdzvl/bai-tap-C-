#include<stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	if(c>='A' && c<='Z'){
		printf("UPPER");
	}
	else if(c>='a' && c<='z'){
		printf("LOWER");
	}
	else if(c>='0' && c<='9'){
		printf("DIGIT");
	}
	else{
		printf("SPECIAL");
	}
}
