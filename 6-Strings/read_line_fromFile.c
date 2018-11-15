#include <stdio.h>
#include <stdlib.h>
 int main(int argc, char const *argv[]) {

   FILE* fptr;
   char cp[1000];
   if((fptr=fopen("try.txt","r"))==NULL){

     printf("\nError\n");
     exit(1);
   }
   else {
     fscanf(fptr,"%[^\n]",cp);
     printf("Data from file : %s\n",cp);
   }
   fclose(fptr);
  return 0;

}
