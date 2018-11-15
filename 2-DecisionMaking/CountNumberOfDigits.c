#include<stdio.h>



int main(){

	int input;

	printf("Enter a integer number:");
		scanf("%d",&input);

		int count;
			count=0;

while(input>0){
	
	input /= 10;
	count++;
}
	printf("Number of digits: %d",count);
	
	
	return 0;
}
