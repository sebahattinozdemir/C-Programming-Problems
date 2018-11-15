#include<stdio.h>



int main(){
	
	int n1,remainder,reversedNumber;
	printf("Enter a number:");
	
		scanf("%d",&n1);
	
	reversedNumber=0;
		
		while(n1!=0){
			
		remainder=n1%10;
			
			reversedNumber=reversedNumber*10+remainder;
			
				n1/=10;
				
			
		}
		
		printf("reversedNumber:%d\n",reversedNumber);
	
	return 0;
}
