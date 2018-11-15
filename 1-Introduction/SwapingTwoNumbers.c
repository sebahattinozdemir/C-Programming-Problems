#include<stdio.h>

int main(){
	
	
	int n1;
	int n2;
	
	int temp;
	
	printf("Enter two number that you wanna swap");
	
	scanf("%d",&n1);
	scanf("%d",&n2);
	
	printf("before swapping values:\n");
	printf("n1:%d n2:%d\n:",n1,n2);

	temp=n1;
		n1=n2;
			n2=temp;
	
	
	
	
	printf("n1:%d ",n1);
	printf("n2:%d\n",n2);
	
	return 0;
}
