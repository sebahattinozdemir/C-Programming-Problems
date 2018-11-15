#include<stdio.h>
#include<math.h>

int i=0;
float arr[100];
int n;
float sum =0.0;
float mean,variance,standardDeviation;

int main(){
	
	printf("Enter number of elements:");
	scanf("%d",&n);
	
	while(n>100 && n<1){
		
		printf("try again...\n");
		printf("Enter number of elements:");
	scanf("%d",&n);
	
	}
	
	while(i<n){
		
		printf("Enter the %dth element:",i+1);
		
		scanf("%f",&arr[i]);
		
		sum+=arr[i];
		i++;
	}
	
	mean=sum/n;
	
	int j=0;
	
	sum=0;
	
	while(j<n){
		
		arr[j]= pow(arr[j]-mean,2);
		sum+=arr[j];
		j++;
	}
		
		
		
	standardDeviation=sqrt(sum/10);
		
	printf("Standard deviation:%.6f",standardDeviation);
	
	return 0;
}
