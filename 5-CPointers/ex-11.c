#include<stdio.h>

//character arrays sizeof character arrays =sizeof + 1(null terminating character)
int main(){

char c1[20]="hello" ;//must be in one line declaration and definiton

printf("sizeof char array:%d\n",sizeof(c1));

char* c2;
c2=c1;

printf("c1[0]:%c\n",c1[0]);
printf("c2[0]:%c\n",c2[0]);
printf("c1[1]:%c\n",c1[1]);
printf("c2[1]:%c\n",c2[1]);
printf("c1[2]:%c\n",c1[2]);
printf("c2[2]:%c\n",c2[2]);
printf("c1[3]:%c\n",c1[3]);
printf("c2[3]:%c\n",c2[3]);
printf("c1[4]:%c\n",c1[4]);
printf("c2[4]:%c\n",c2[4]);

//c2++ valid c1++ invalid  ve c1 = c2 compile error

return 0;
}
