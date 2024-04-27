#include<stdio.h>
#include<math.h>

int snt( int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}		
	}
				return 1;
}

int csnt(int n){
	int sum=0;
	while(n){
		
		int r=n%10;
		sum+= r;
		if(r !=2 && r!=3 && r!= 5 && r!=7)
			return 0;
			n/=10;
					
	}
	return snt(sum);
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int dem=0;
	for(int i=a;i<=b;i++){
		if(csnt(i) && snt(i)  ){
			++dem;
		}	
	}
	printf("%d",dem);
	return 0;
}






