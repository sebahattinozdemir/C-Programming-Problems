#include<stdio.h>


int main(){
	
	int dividend;
	
	int divisor;
	
	int quatient;
	int remainder;
	printf(	"Enter dividend:");
	
		scanf("%d",&dividend);
			
	printf("Enter divisor:");
		scanf("%d",&divisor);
	
	
	quatient=dividend/divisor;
	
	remainder=dividend%divisor;
	
	printf("Quatient:%d \n",quatient);
	printf("Remainder:%d \n",remainder);
	
	
	
	return 0;
}
