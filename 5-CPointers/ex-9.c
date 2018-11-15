#include<stdio.h>

int main(){

// arrays and pointer have strong relationship
int A[5]={2,4,5,8,1};
int* p;
p=A; // p=&A[0]

printf("adress of pointer: %u\n",p);
printf("adresss of A:%d\n",A);

printf("value of *(p):%d\n",*p);
printf("value of *(p+1):%d\n",*(p+1));
printf("value of *(p+2):%d\n",*(p+2));
printf("value of *(p+3):%d\n",*(p+3));
printf("value of *(p+4):%d\n",*(p+4));

printf("\n");
printf("value of *(A):%d\n",*(A));
printf("value of *(A+1):%d\n",*(A+1));
printf("value of *(A+2):%d\n",*(A+2));
printf("value of *(A+3):%d\n",*(A+3));
printf("value of *(A+4):%d\n",*(A+4));

printf("\n");

printf("adress of (A):%u\n",(A));
printf("adress of (A+1):%u\n",(A+1));
printf("adress of (A+2):%u\n",(A+2));
printf("adress of (A+3):%u\n",(A+3));
printf("adress of (A+4):%u\n",(A+4));

printf("\n");

printf("adress of (p):%u\n",(p));
printf("adress of (p+1):%u\n",(p+1));
printf("adress of (p+2):%u\n",(p+2));
printf("adress of (p+3):%u\n",(p+3));
printf("adress of (p+4):%u\n",(p+4));




return 0;
}
