#include<stdio.h>
#include<math.h>

int main(){
    long long a,b;
    scanf("%lld%lld",&a,&b);
    for(int i=ceil(sqrt(a));i<=sqrt(b);i++){
        printf("%lld ",1ll*i*i);
    }
    return 0;
}

