#include<stdio.h>


int main(){

int b [2][3] = {2,3,6,4,5,8};
// int *p = b //invalid

int (*p)[3] =b;

printf("two dimensional array adresses...\n\n");
printf(" adress OF    b: %d\n",b);
printf("adress &b[0][0]: %d\n",&b[0][0]);
printf("adress of &b[0]: %d\n",&b[0]);
printf("adress of    *b: %d\n",*b);


printf("\nadress of *(b+1)  : %d\n",*(b+1));
printf("adress of &b[1][0]: %d\n",&b[1][0]);

printf("adress of *(b+1)+2: %d\n",*(b+1)+2);
printf("adress of &b[1][2]  : %d\n",&b[1][2]);

printf("\n value *(*b+1): %d\n",*(*b+1));
printf(" value b[0][1]: %d\n",b[0][1]);

printf("\n value *(*b+2) : %d\n",*(*b+2));
printf(" value b[0][2] : %d\n",b[0][2]);

printf("\n value *(*(b+1)+1): %d\n",*(*(b+1)+1));
printf(" value b[1][1]    : %d\n",b[1][1]);


return 0;
}
