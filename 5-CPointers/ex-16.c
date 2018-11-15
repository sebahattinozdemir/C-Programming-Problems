#include<stdio.h>
#include<stdlib.h>
int main(){

int n;

printf("enter sizeof an array:");
scanf("%d",&n);
//int a[n] compile error

int *A =(int*) malloc(sizeof(int)*n);
//or   =(int*) calloc(n,sizeof(int));

for(int i=0;i<n;i++)
   *(A+i)=i+1;

for(int i=0;i<n;i++)
  printf("%d ",*(A+i));

printf("\n");
int *B = (int*) realloc(A,2*n*sizeof(A));
  free(A);// after free it is a good practice to set null to freed object
  A=NULL;

printf("Prev block adress = %d , new adress = %d\n",A,B);

for(int i=0 ;i< 2*n ; i++)
printf("%d ",*(B+i));

printf("\n");
return 0;
}
