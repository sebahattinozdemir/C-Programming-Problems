#include<stdio.h>
#include<stdlib.h>

//pointer as function arguments

int *Add (int* a,int* b){

int* c = (int*)malloc(sizeof(int));
/* important if you are returning function pointer
then you should malloc it if not you face some garbage value.*/

*c=*a+*b;
  return c;
}

int main(){

int a =2,b=3;

int* ptr=Add(&a,&b);
printf("sum:%d\n",*ptr);

return 0;
}
