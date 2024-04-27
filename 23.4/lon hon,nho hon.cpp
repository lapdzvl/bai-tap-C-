#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x;
	scanf("%d",&x);
	int lonx=0;
	int nhox=0;
	for(int i=0;i<n;i++){
		if(x-a[i]>0){
			++nhox;
		}
		else if(x-a[i]<0){                       // con mot truong hop neu no bang 0
			++lonx;
		}
		}
	printf("%d\n%d",nhox,lonx);
	return 0;
			
	}

