#include<stdio.h>


int main(){
	
	
	int input;
	printf("enter a number:");
	
	scanf("%d",&input);
	int i,j;
	for(i=0;i<input;i++){
		
		for(j=0;j<=i;j++){
			
			printf("*");
		}
		printf("\n");
		
	}
	
	
	
	return 0;
}
