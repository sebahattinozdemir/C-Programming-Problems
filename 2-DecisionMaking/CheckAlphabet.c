#include<stdio.h>

int main(){
	

char input;

scanf("%c",&input);
//You can use 'a' to'z' and 'A' TO 'Z'
if((input>=65 && input<=97 ) || (input>=97 && input<=122))
   printf("%c is an alpahabet",input);

	else
	printf("%c is not an alpahabet.",input);
	
	return 0;
}
