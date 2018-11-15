#include<stdio.h>


int main(){

int a;
int* p =&a;

printf("some garbage value for value of *p :%d or a:  %d\n",*p,a);
//a = *p;


printf("adress of a:%p\nadress of a: %p\n",p,&a);

printf("adress of p:%p\n",&p);


a=5;
printf("value after a assigned 5: %d\nvalue after *p assigned 5: %d\n",a,*p);

*p=10;

printf("value after *p assigned 10: %d\nvalue after a assigned 10: %d\n",*p,a);


printf("adress of a:%p\n",p);
printf("adress of p:%p\n",&p);

int b=20;
*p=b;

printf("\nadress of a:%p\n",&a);
printf("\nvalue of a : %d or *p :%d\n",a,*p);

  return 0;
}
