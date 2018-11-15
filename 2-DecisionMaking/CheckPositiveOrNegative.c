#include<stdio.h>

int main(){
	
//Checking positiveOrNegative

int input;
printf("enter a  int number:");

scanf("%d",&input);

	if(input>0)
	  printf("%d is positive number.",input);
	  	
	  	else if(input<0)
	  		printf("%d is negative number",input);
	  		
	  			else 
	  			  printf("%d is zero",input);
	
	return 0;
}
