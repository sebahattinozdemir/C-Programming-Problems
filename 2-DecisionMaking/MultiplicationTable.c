#include<stdio.h>

//Multiplacation table  Range and number up to user...
int main(){
	
	int input,i,range;
		printf("Enter a number:");
			scanf("%d",&input);
	    printf("Enter a range:");
	    	scanf("%d",&range);
	for(i=0;i<=range;i++){
		
		printf("%d * %d = %d\n",input,i,(input*i));
		
	}
	
	
	return 0;
}
