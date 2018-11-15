#include<stdio.h>
#include<math.h>


//153 = 1*1*1 + 5*5*5 + 3*3*3  // 153 is an Armstrong number.
int main(){
	
		int n1,n2;

	printf("Enter two number: ");
	
	scanf("%d %d",&n1,&n2);

	
int i,k=0;
int a,remainder,armStrong;
int temp1,temp2;


for(i=n1;i<=n2;++i){
	
    temp1=i;
    temp2=i; 	
   
    a=0;
	armStrong=0;
	k=0; 	

	while(temp1>0){
        		
		temp1=temp1/10;
		++k;		
	}
	
	
	
	while(temp2>0){
		
		
     	remainder = temp2%10;
		
		a =	pow(remainder,k);
		
		armStrong= a+armStrong;
		
		temp2=temp2/10;
	}
	
	if(armStrong==i)
		printf("%d is armstrong \n",armStrong);

	
}	
		
	
	return 0;
}
