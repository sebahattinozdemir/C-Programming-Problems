#include<stdio.h>

// an example of factorial of 5 :5*4*3*2*1
int main(){
	
	int input,i;
	printf("Enter a integer number:");
		scanf("%d",&input);
	
	int fac=1;

	if(input<0)
	 	printf("Error factorial of negative number does not exist...");
	
	else{
	
	for(i=input;i>=1;i--){
		
		fac *= i;
		
	}

	printf("factorial:%d",fac);
}
	return 0;
}
