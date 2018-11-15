#include<stdio.h>
#include<math.h>


int convertDecimalToBinary(long long n);

int main(){
	int n;
printf("enter a DecimalNumber:");
scanf("%lld",&n);

	
	printf("%d",convertDecimalToBinary(n));
	
	return 0;
}

int convertDecimalToBinary(long long n){
	
	int remainder,result=0,i=1;
	
	while(n!=0){
		
		remainder=n%2;
		
		result+=remainder*i;
		i*=10;
		
		n/=2;
	}
	
		return result;
}
