#include<stdio.h>


int main(){
	
	
	int n,n1,remainder,reversedNumber;
	printf("Enter an integer:");
	
		scanf("%d",&n);
	
		reversedNumber=0;
		n1=n;
		while(n!=0){
			
			remainder=n%10;
				
				reversedNumber=reversedNumber*10 + remainder;
			n/=10;
			
		}
		
		if(n1==reversedNumber)
			printf("%d is Polindrome",n1);
			
			else
				printf("%d is not Polindrome.",n1);
		
	return 0;
}
