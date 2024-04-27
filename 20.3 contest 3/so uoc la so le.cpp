#include<stdio.h>
#include<math.h>
// cac'h nay' van~ dung' nhung chua toi' uu , test van~ bi time limit, chi can check no l'a so chinh' phuong thi uoc cua no' luon le?
long long uoc(long long n){
	long long dem=0;
		for(int i=1;i<=sqrt(n);i++){
			if(n%i==0){
				++dem;
				if(i!=n/i){
					++dem;	
				}
				
			}
	}
	if(dem%2==0){
		return 0;
	}
	else{
		return 1;
	}
	
}
int main(){
	long long n;
	scanf("%lld",&n);
		if(uoc(n)==0){
		printf("NO\n");
		
	}
		else{
			printf("YES\n");
	}
	return 0;
}

