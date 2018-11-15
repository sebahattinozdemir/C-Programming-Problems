#include<stdio.h>

/*The Fibonacci sequence is a series where the next term is the sum of pervious two terms. 
  The first two terms of the Fibonacci sequence is 0 followed by 1.*/
// 0 1 1 2 3 5 8 13

int main(){
	
	int input;
    int i;
    int nextTerm=0;
	int prepre=0;
	int prev=1;
	scanf("%d",&input,printf("enter the number:"));
	

/*   This for the term based fibonacci
	for(i=0;i<=input;i++){
		
	printf("%d ",nextTerm);			
	nextTerm= prepre + prev;
	prepre=prev;	
	prev=nextTerm;

	}
*/	
	
	// This a certain number that continues to fibonacci that number
	
	while(nextTerm<input){
		
			printf("%d ",nextTerm);			
	nextTerm= prepre + prev;
	prepre=prev;	
	prev=nextTerm;
	}
	
	return 0;
}
