#include<stdio.h>
#include<math.h>

int convertBinaryToOctal(long long binaryNumber);
int main(){
	
	long long n;
	printf("Enter a number:");
	scanf("%lldd",&n);
	
	printf("Octal:%d",convertBinaryToOctal(n));
	
	return 0;
}

int convertBinaryToOctal(long long binaryNumber){
	
	int remainder;
	int i=0;
	int decimal=0;
	while(binaryNumber!=0){
		
		remainder=binaryNumber%10;
		
		decimal+=remainder*pow(2,i);
		i++;
		
		binaryNumber/=10;
		
	}
	int remainder1;
	int j=1;
	int result=0;
	while(decimal!=0){
	
	remainder1=decimal%8;
	
	result+=remainder1*j;
		j*=10;
		decimal/=8;
	}
	
	return result;
}
