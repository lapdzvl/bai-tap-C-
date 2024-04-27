#include<stdio.h>
#include<math.h>
int main(){
	int x, y, z, t;
	scanf("%d%d%d%d",&x,&y,&z,&t);
	int lonhai=(int)fmax(x,y);
	int nho=fmin(x,y);
	int nhohai=fmin(z,t);
	int lonba=fmax(lonhai,z);
	int nhoba=fmin(nho,nhohai);
	printf("%d\n%d\n%d\n%d",lonhai,nhohai,lonba,nhoba);
	
}
