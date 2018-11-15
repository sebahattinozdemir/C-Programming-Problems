#include<stdio.h>


int main(){
	int input;
	printf("Enter a number:");
		
		scanf("%d",&input);
		
		int i,j=1;
		
		for(i=input; i>=1; i--){
			
			for(j=i;j>=1;j--){
				printf("* ");
			}
			
				printf("\n");
		}
		
	return 0;
}
