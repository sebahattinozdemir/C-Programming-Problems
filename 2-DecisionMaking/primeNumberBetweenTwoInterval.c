#include<stdio.h>


int main(){
	int n,n1;
	printf("Enter two numbers:");
		scanf("%d %d",&n,&n1);	
	
int i,j,flag;

	
	for(i=n;i<n1;i++){
	
		flag=0;
	
		for(j=2;j<i;j++){
			
			if(i % j==0){
			
		         flag=1;	    
	      break;
	  }
	  
		}
		
		if(flag==0)
				printf("%d ", i);
		
			
	}
		
	return 0;
}
