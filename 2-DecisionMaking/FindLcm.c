#include<stdio.h>

//The LCM of two numbers can also be found using the formula:

//LCM = (num1*num2)/GCD
int main(){
	
	int n1,n2;
	printf("Enter two integers:");
		scanf("%d %d",&n1,&n2);

int i,gcd,lcm;
	for(i=1;i<=n1&&i<=n2;i++){
		
		
		if(n1%i==0&&n2%i==0)
		   gcd=i;	
	}
	
	
lcm=(n1*n2)/gcd;

printf("LCM:%d",lcm);

	
	


	
	
	return 0;
}
