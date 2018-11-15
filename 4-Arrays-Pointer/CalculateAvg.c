#include<stdio.h>


int i=1;
float arr[100];
int n;
float sum =0.0;
float avg;
int main(){
	
	printf("Enter number of elements:");
	scanf("%d",&n);
	
	while(n>100 && n<1){
		
		printf("try again...\n");
		printf("Enter number of elements:");
	scanf("%d",&n);
	
	}
	
	while(i<=n){
		
		printf("Enter the %dth element:",i);
		
		scanf("%f",&arr[i]);
		
		sum+=arr[i];
		i++;
	}
	
	avg=sum/n;
	
	printf("avg:%.2f",avg);
		
	
	
	return 0;
}
