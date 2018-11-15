#include<stdio.h>


int factorial(int n);

int main(){
	int n;
	printf("Enter a postive number:");
	scanf("%d",&n);
	
	printf("result:%d",factorial(n));
	return 0;
}

int factorial(int n){
	
	
	if(n>2)
	return n*factorial(n-1);
	else if(n==0 || n==1)
	return 1;
}
