#include<stdio.h>
#include<math.h>
int tong(int a[], int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	return sum;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d",tong(a,n));
}
