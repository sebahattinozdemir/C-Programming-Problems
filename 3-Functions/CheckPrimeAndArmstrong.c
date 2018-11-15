#include<stdio.h>


int checkPrime(int number);
int checkArmStrong(int number);

int main(){

	int number,flag;
	printf("Enter a number:");
	scanf("%d",&number);
	
	flag=checkPrime(number);
	
	if(flag==1)
		printf("Number is Prime\n");
	else
		printf("NUmber is not prime\n");	
	

	flag=checkArmStrong(number);
	
	if(flag==1)
		printf("Number is Armstrong number.\n");
	else
		printf("Number is not Armmstrong number.\n");
	return 0;
}

int checkPrime(int n){
	
	int i,flag;

	flag=1;
	
	for(i=2;i<=n/2;i++){
		if(n%i==0)
			flag=0;
			break;
	}
	
	return flag;
	
}

int checkArmStrong(int n){
	
	int number,temp,flag=1;
	number=n;
	int i=0;
	temp=n;
	int digit,sum;
	sum=0;
	 while(n!=0){
	 	n/=10;
	 	i++;
	 }
	
	while(number!=0){
		digit=number%10;
		sum+=pow(digit,i);
		number/=10;

	}
	if(sum==temp)
		return flag;	

}
