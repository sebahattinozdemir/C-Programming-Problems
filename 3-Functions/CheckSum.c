#include<stdio.h>
#include<math.h>
/*C Program to Check Whether a Number can be Expressed as Sum of Two Prime Numbers*/
int checkPrime(int n);
int main(){
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	
	
	for(i=2;i<=n/2;i++){
		
		if(checkPrime(i)==1){
			
			if(checkPrime(n-i)==1){
				
				printf("%d= %d + %d\n",n,i,n-i);
			}
		}
	}
		
		
	
	
	return 0;
}

int checkPrime(int n){
	
	int i,isPrime=1;
	
	for(i=2;i<=n/2;i++){
		if(n%i==0){
		
			isPrime=0;
			break; }			
	}
	
	return isPrime;
	
}



