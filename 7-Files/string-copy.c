#include<stdio.h>


int main(){

char c1[100],c2[100];
printf("Enter String s1:");
scanf("%s",c1);
int i;

for(i=0;c1[i]!='\0';i++){

  c2[i]=c1[i];
}

printf("String s2:%s\n",c2);

return 0;
}
