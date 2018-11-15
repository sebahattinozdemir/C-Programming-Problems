#include<stdio.h>
#include<math.h>


int convertBinaryToDecimal(long long n);

int main(){
	int n;
printf("enter a binaryNumber:");
scanf("%lld",&n);

	
	printf("%d",convertBinaryToDecimal(n));
	
	return 0;
}

int convertBinaryToDecimal(long long n){
	
	int remainder,result=0,i=0;
	
	while(n!=0){
		
		remainder=n%10;
		
		result+=remainder*pow(2,i);
		i++;
		n/=10;
	}
	
		return result;
}
