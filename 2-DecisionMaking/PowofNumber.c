#include<stdio.h>



int main(){
	
	int base,exponent,res,i;
	res=1;
printf("Enter base and exponent:");

	scanf("%d %d",&base,&exponent);

while(i<=exponent){
	
	res *=base; 
	
	i++;
}
	printf("result:%d",res);
	return 0;
}
