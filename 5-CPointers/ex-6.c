#include<stdio.h>


int main(){

int x=5;
int* p=&x;

int** q;
int*** r;

printf("adress of a: %u\n",p);
printf("value of a:%u\n",*p);

q =&p;
printf("\nadress of q:%u\n",&q);
printf("adress of p:%u\n",q);
printf("adress of a:%u\n",*q);
printf("value of a :%d\n",**q);

r=&q;

printf("\nadress of q: %u\n",r);
printf("adress of p:%u\n",*r );
printf("value of a:%u\n",***r);

**q = *p+2;
printf("value of a:%u\n",***r);

***r = **q+1 ;
printf("value of a:%u\n",***r);



return 0;
}
