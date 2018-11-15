#include<stdio.h>

int main(){
	char oprtr;
	double n1,n2;
	printf("Enter an operator:");
	scanf("%c",&oprtr);
	
	printf("Enter two operands:",n1,n2);
	
	scanf("%lf %lf",&n1,&n2);
	
	switch(oprtr){
		
		case '+': printf("%.1lf + %.1lf = %.1lf",n1, n2, n1 + n2);
            break;
            
        case '-': printf("%.1lf - %.1lf = %.1lf",n1, n2, n1 - n2);
            break;    
            
        case '/': printf("%.1lf / %.1lf = %.1lf",n1, n2, n1 / n2);
            break;    
        
		case '*': printf("%.1lf * %.1lf = %.1lf",n1, n2, n1 * n2);
            break;    
        
		default : 
            printf("Error! operator is not correct");    
            
  	
	}
	
	return 0;
}
