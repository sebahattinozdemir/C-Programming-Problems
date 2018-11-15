#include<stdio.h>


int main(){
	int input;
	printf("Enter a number:");
		
		scanf("%d",&input);
		
		int i,j;
		for(i=1;i<=input;i++){
			
			for(j=1;j<=i;j++){
				printf("%d ",j);
			}
			
				printf("\n");
		}
		
	return 0;
}
