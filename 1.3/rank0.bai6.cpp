#include<math.h>
#include<stdio.h>
int main() 
{
double n;
	scanf("%lf",&n);
	int xuong=(int)floor(n);
	int len=(int)ceil(n);
	int phanthapphan=(int)round(n);
	printf("%d\n%d\n%d",xuong ,len ,phanthapphan);
}
