#include <stdio.h>



int main(int argc, char const *argv[]) {

FILE* ptr;
char cp[10000];
ptr=fopen("try.txt","w");

if(ptr==NULL)
printf("\nError while opening file...\n");

else{

printf("Enter a sentece:\n");

gets(cp);

fprintf(ptr, "%s",cp);

}

fclose(ptr);
  return 0;
}
