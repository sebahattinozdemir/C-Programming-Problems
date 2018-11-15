#include<stdio.h>


int main(){
	
	char input;
printf("Enter u to display UPPERCASE to letters or Enter l to display character in lowercase:");	
	scanf("%c",&input);
	
	char c;
	if(input=='u'){
		
		for(c='A';c<='Z';c++)
		   printf("%c ",c);
		
	}
	else if(input=='l'){
		for(c='a';c<='z';c++)
			printf("%c ",c);
	}
	else
		printf("error!! you need to press l or u in order to program work...");
	
	return 0;
}
