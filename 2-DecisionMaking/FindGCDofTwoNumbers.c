
#include<stdio.h>

int main(){
	
	int i,gcd,n1,n2;
	
	printf("Enter two number:");
		scanf("%d %d",&n1,&n2);
	
	
	for(i=1;i<=n1 && i<=n2;i++){
		
		if(n1%i==0 && n2%i==0)
		    gcd=i;
		
		
	}
	
	printf("GCD:%d",gcd);
	
	return 0;
	
	
	
	
}

