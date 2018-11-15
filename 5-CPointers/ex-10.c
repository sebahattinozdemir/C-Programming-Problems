#include<stdio.h>

//arrays as function elements

// arrays ==pointers it is same thing
int sumofElements(int a[],int size); // we should pass the size
int main(){

int A [] = {4,5,8,7,6};
int total=sumofElements(A,5);
printf("total: %d\n",total );


return 0;
}

int sumofElements(int* a,int size){

  int i,sum=0;

  for(i=0;i<size;i++)
  sum+=a[i];

  return sum;
}
