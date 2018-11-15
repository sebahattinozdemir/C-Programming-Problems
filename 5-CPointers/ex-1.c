#include<stdio.h>


int main(){

int a;
int *p;

a=5;
p=&a;

printf("addres of a :%p\n",  p); // both are same
printf("adress of a :%p\n ",&a);

printf("\nvalue of a:%d\n",*p); // both are same
printf("value of a:%d\n",a);

printf("adress of p:%p\n",&p); //adrees of p

  return 0;
}
