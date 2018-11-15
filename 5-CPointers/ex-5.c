#include<stdio.h>


int main(){

int *p;

void *po;

po=p;
printf("adress of po:%p\n",po);
//printf("value  of po:%d\n",*po); // you cant dereference the pointer

//  printf("adress of (po+1):%p\n",(po+1)); in void pointer aritmetic is not allowed



return 0;
}
