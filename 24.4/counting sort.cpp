#include<stdio.h>
#include<math.h>
int cnt[10000001]={0};
void countingsort(int a[], int n){
	int k=-1e9;
		for(int i=0;i<n;i++){
			k=fmax(k, a[i]);
		}
		for(int i=0;i<n;i++){
			cnt[a[i]]++;
		}
	
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		countingsort(a,n);
}
