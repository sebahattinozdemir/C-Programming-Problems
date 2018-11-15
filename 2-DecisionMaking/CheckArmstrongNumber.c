#include<stdio.h>
#include<math.h>
//153 = 1*1*1 + 5*5*5 + 3*3*3  // 153 is an Armstrong number.
int main(){
	
		int n;
	printf("Enter a number: ");
	
	scanf("%d",&n);
	
	int i=0;
	int armStrong=0;

	int t=n;
	
	while(n>0){
        		
		n=n/10;
		++i;		
	}
	
	
	int remainder,j;
	int t1=t;
	
	int a;
	while(t>0){
		
     remainder = t%10;
		
			
		a =	pow(remainder,i);
		
		armStrong= a+armStrong;
		
		t=t/10;
	}
	
	
	
	if(armStrong==t1)
		printf("%d is Armstrong number",t1);
	else
		printf("%d is not Armstrong number.",t1);
	return 0;
}
