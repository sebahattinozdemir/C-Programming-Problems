#include<stdio.h>

int sumOfNaturalNumbers(int n);

int main(){
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	
	printf("%d",sumOfNaturalNumbers(n));
	return 0;
}

int sumOfNaturalNumbers(int n){
	
	
	if(n>0)
	return n+sumOfNaturalNumbers(n-1);
	else
		return -1;
}
