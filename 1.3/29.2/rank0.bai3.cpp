#include<stdio.h>
#include<math.h>
int main()
{
    long long x ,y ,z, t;
    scanf("%d %d %d %d" ,&x ,&y ,&z ,&t);
    printf("%d,%d,%d,%d\n",y ,z ,x ,t);
    long long tong=(long long)x+y+z+t;
    printf("%d\n",tong);
    long long tich=(long long)x-y+z*t;
    printf("%d",tich);
    return 0;
}
