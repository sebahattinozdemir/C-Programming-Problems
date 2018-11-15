#include<stdio.h>


int main(){
	char input;
	printf("Enter an alphabet:");
		
		scanf("%c",&input);
		
		if(input>=97)
		   input=input-32;
		
		int i,j;
		for(i='A';i<=input;i++){
			
			for(j='A';j<=i;j++){
				printf("%c ",j);
			}
			
				printf("\n");
		}
		
	return 0;
}
