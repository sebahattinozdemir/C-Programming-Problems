#include<stdio.h>
//three variation of loops tried...

int main(){
	
	int input,sum,i;
	sum=0;
	printf("Enter a positive number:");
	
	scanf("%d",&input);
	/*for(i=0;i<=input;i++){
		
		sum+=i;
		
	}
	printf("sum:%d",sum);
	*/
	/*
	i=0;
	while(i<=input){
		
		sum+=i;
		++i;
	}
	
	printf("sum:%d",sum);
	*/
	
	i=0;
	do{
		sum+=i;
		
		i++;
	}
	while(i<=input);
	
	printf("sum:%d",sum);
	
	return 0;
	
}
