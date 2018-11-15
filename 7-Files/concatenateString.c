#include<stdio.h>


int main(){

char c1[100],c2[100];
printf("Enter first string:");
scanf("%s",c1);
printf("Enter first string:");
scanf("%s",c2);
int i,j;

//calculate the length of the string
for(i=0;c1[i]!='\0';i++)
//then store c1

for(j=0;c2[j]!='\0';j++){

  c1[i]=c2[j];
   i++;
}

printf("After concatenation:s%s\n",c1);

return 0;
}
