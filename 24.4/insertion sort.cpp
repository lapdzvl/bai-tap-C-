#include<stdio.h>
void insertionsort(int a[], int n){
	for(int i=1;i<n;i++){
		int vtc=i-1, gtc=a[i];
			while(vtc>=0 && gtc<a[vtc]){
				a[vtc+1]=a[vtc];
				--vtc;
			}
			a[vtc+1]=gtc;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		insertionsort(a,n);
			for(int i=0;i<n;i++){
				printf("%d ",a[i]);			
			}
}
