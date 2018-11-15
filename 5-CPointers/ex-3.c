#include<stdio.h>

int main(){

/*about Pointer aritmetics*/


int a;
int* p =&a;

printf("adress of a:%u\n",p);

printf("size of int : %lu\n",sizeof(int));

printf("adress of p+1:%u\n",p+1);

printf("adress of p+2:%u\n", p+2);

*p=4;
printf("value of *(p):%d\n",*p);

printf("value of *(p+1)= some garbage value\n");
printf("value of *(p+1):%d\n",*(p+1));

printf("\nsizeof char : %d\n",sizeof(char));


char c ='a';
char* cp;
*cp=c;

printf("value of cp:%c\n",*cp);
printf("adress of cp or c : %u\n",cp);
printf("adress of cp+1: %u\n", cp+1);
}
