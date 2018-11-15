#include<stdio.h>

int main(){
	
	/*ax2 + bx + c = 0, where
a, b and c are real numbers 

determinant=b^2-4ac

det>0 r1= -b+sqrt(b^2-4ac)/2a r2=r1= -b-sqrt(b^2-4ac)/2a
det=0  -b/2a
det<0   r1=-b/2a + isqrt(-(b^2-4ac)) r2=r1=-b/2a - isqrt(-(b^2-4ac))

*/
    double a,b,c;
    double determinant;
    double root1 , root2;
    double realPart,imaginaryPart;
	printf("Enter the coefficients :");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	determinant=(b*b)-(4*a*c);
	
	
	
	if(determinant>0){
		root1= -b+sqrt(determinant)/(2*a);
		root2= -b-sqrt(determinant)/(2*a);
		printf("root1:%.2f root2:%.2f",root1,root2);
	}
	else if(determinant<0){
     
     realPart=-b/(2*a);
     imaginaryPart= sqrt(-determinant)/(2*a);
     
     printf("root1:%.2f+%.2lfi  root2:%.2f-%.2lfi",realPart,imaginaryPart,realPart,imaginaryPart);
     
		
		
	}
	else {
		root1=-b/(2*a);
		root2=-b/(2*a);
		printf("root1:%.2f root2:%.2f",root1,root2);
		
	}
	
	return 0;
}
