#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
			int trai=0, phai=n-1;
			while(trai<=phai){
				int tam=a[trai];
				a[trai]=a[phai];
				a[phai]=tam;
				++trai, --phai;
			}
			for(int i=0; i<n;i++){
				printf("%d",a[i]);			
		}
}
