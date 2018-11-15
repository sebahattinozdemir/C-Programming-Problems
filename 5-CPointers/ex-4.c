#include<stdio.h>


int main(){

int a = 1025;

int *p =&a;

printf("sizeof int :%lu\n",sizeof(int));

printf("adress of a: %p and  value: %d \n",p,*p);

char* po;
po=(char*)p; // type cast is must

printf("sizeof char : %lu\n",sizeof(char));
printf("adress of po:%p\n",po);
printf("value of po:%d\n",*po);

printf("value of (po+1):%d\n",*(po+1));
printf("value of (po+2):%d\n",*(po+2));
printf("value of (po+3):%d\n",*(po+3));

printf("\nvalue of (po+4):%d\n",*(po+4));

return 0;


}
