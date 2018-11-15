#include<stdio.h>
#include<math.h>

int convertOctalToBinary(long long n);
int main(){
	
	long long n;
	printf("Enter a octal number:");
	scanf("%lldd",&n);
	
	printf("Binary:%d",convertOctalToBinary(n));
	
	return 0;
}

int convertOctalToBinary(long long n){
	
	int decimal=0,remainder;
	int i=0;
	int result=0;
	while(n!=0){
		remainder=n%10;
	  decimal+=remainder*pow(8,i);
		i++;
		
		n/=10;;
		
	}
	i=1;
	while(decimal!=0){
		
	remainder=decimal%2;
	
	result+=remainder*i;
	i*=10;
	decimal/=2;	
		
	}
	
	return result;
}
