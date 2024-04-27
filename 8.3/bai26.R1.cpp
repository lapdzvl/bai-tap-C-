#include<stdio.h>
#include<math.h>
int main(){
	long long a,b,c,d;
	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
 	long long min=a, max=a;
 	if(b<min) min=b;
 	if(c<min) min=c;
 	if(d<min) min=d;
 	if(b>max) max=b;
 	if(c>max) max=c;
 	if(d>max) max=d;
 	printf("%lld %lld",max,min);
}
