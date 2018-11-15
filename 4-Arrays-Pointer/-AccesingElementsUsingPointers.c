#include<stdio.h>




int main(void){
	
	
	int data[5],i;
	printf("Enter elements: ");
	
	for(i=0;i<5;i++){
		scanf("%d",data+i);
	
	}
	printf("You entered: ");
	for(i=0;i<5;i++){
		printf("%d ",*(data+i));
	}
	
	
	
	
	
	
	
	
	return 0;
}
