#include<stdio.h>


int i=1;
float arr[100];
int n;

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
		i++;
	}
	
float max=0;
int j;
	
	for(j=0;j<n;j++){
		
		if(arr[j]>max)
			max=arr[j];
		
	}
	
	printf("Maximum number is in the array:%.2f",max);
	
		
	
	
	return 0;
}
