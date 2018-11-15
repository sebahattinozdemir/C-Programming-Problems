#include<stdio.h>
#include<stdlib.h>

void printHello(char* p){

  printf("Hello %s\n",p);
}
int Add(int a,int b){

  return a+b;
}

/*function pointers*/
/*Uses cases are callbacks function callbacks*/
void A(){

  printf("Hello\n");
}
void B(void (*ptr)()){
  ptr();//callback function that ptr pointsto
}
int main(){

B(A);//this way you can directly use the callback functionS

void (*ptr)(char*);

ptr=printHello;
ptr("ali");

int (*p)(int,int);
p=Add;
int c= p(2,3);
printf("%d\n",c);


/*
char* p ="Ali";
printHello(p);
*/


return 0;
}
