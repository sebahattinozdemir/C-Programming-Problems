#include<stdio.h>


int power(int base,int exponent);
int main(){
	int n,n1;
	printf("Enter the base:");
	scanf("%d",&n);
	printf("enter the exponent:");
	scanf("%d",&n1);
	
	
	printf("power:%d",power(n,n1));
	
	return 0;
}

int power(int base,int exponent){
	
	
	
	if(exponent!=0)
	return base*power(base,exponent-1);
	 
	else 
	return 1;
}
