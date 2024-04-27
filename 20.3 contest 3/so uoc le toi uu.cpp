#include<stdio.h>
#include<math.h>

int uoc(long long n){
	int i=sqrt(n);
		if(1ll*i*i==n){
			return 1;
	}
	else
		return 0;
	}
	

int main(){
	long long n;
	scanf("%lld",&n);
	if(uoc(n)){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}
