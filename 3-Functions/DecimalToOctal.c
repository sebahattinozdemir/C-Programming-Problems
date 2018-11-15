#include<stdio.h>
#include<math.h>

int convertDecimalToOctal(int decimalNumber);
int main(){
	
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	printf("Octal:%d",convertDecimalToOctal(n));
	return 0;
}

int convertDecimalToOctal(int decimalNumber){
	int result=0,i=1,remainder;

	while(decimalNumber!=0){
		
		remainder=decimalNumber%8;
		
		result += remainder*i;

		i*=10;
		
		decimalNumber/=8;
	}
	
	return result;
}
