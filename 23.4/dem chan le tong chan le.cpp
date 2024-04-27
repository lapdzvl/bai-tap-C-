#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int chan=0, le=0, tongchan=0, tongle=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			++chan;
			tongchan+=a[i];
		}
		else{
			++le;
			tongle+=a[i];
		}
	}
	printf("%d\n%d\n%d\n%d",chan,le,tongchan,tongle);
	return 0;
}
