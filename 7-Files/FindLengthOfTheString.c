#include<stdio.h>

int strlen1(char cp[20000]){
  int i=0;
  while (cp[i]!='\0') {
    i++;
  }
  return i-1;
}

int main(){

char cp[20000];
printf("Enter a string:");
scanf("%s",cp);

printf("length=%d\n",strlen1(cp));

return 0;
}
