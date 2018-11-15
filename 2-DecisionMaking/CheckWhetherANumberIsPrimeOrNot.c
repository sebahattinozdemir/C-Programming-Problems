#include<stdio.h>


int main(){
	
	int n;
	
	printf("Enter a positive number:");
		scanf("%d",&n);
	
	int i=2;
	int flag=0;
	if(n<=0)
		printf("error.");
		
		
		if(n>0){
			
			for(;i<n;i++){
				
				if(n%i==0){
			       flag=1;
				   break;		
				}
			}
		if(flag==1)
		   printf("%d is not prime.",n);
		   else
		   	printf("%d is prime;",n);
					
			}
			
			
			
		
	
			
			
		
	
	
	return 0;
}
