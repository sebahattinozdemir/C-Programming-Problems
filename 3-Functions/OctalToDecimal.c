#include<stdio.h>
#include<math.h>

int convertOctalToDecimal(int octalNumber);
int main(){
	
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	printf("decimal:%d",convertOctalToDecimal(n));
	return 0;
}

int convertOctalToDecimal(int octalNumber){
	int result=0,i=0,remainder;

	while(octalNumber!=0){
		
		remainder=octalNumber%10;
		
		result += remainder*pow(8,i);

		i++;
		
		octalNumber/=8;
	}
	
	return result;
}
