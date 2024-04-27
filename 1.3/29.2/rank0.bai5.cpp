#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	double canhai=sqrt(n),canba=cbrt(n);
	printf("%.2lf\n%.3lf",canhai,canba);
	return 0;
}
