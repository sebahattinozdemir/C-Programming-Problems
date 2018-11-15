#include<stdio.h>



int main(){

int b[2][3];
int (*p)[3];

p=b;
printf("\nall of these are same\n\n");
printf("adress of b       : %d\n",b);
printf("adress of *b      : %d\n",*b);
printf("adress of &b[0]   : %d\n",&b[0]);
printf("adress of &b[0][0]: %d\n",&b[0][0]);





return 0;
}
