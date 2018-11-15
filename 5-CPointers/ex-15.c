#include<stdio.h>


int main(){

int c [3][2][2]={2,5,7,9,3,4,6,1,0,8,9,13};

int (*p)[2][2];

p=c;

printf("adress of c: %d\n",c);

printf("value : %d\n",*(*((*c)+1)+1));

printf("%d\n",*((*c+1)+1));



return 0;
}
