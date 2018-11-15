#include <stdio.h>

int main(){

/*In this example, you'll learn to display source of the program using __FILE__ macro.
*/
  FILE *fp;
   char c;

   fp = fopen(__FILE__,"r");

   do {
        c = getc(fp);
        putchar(c);

   }
   while(c != EOF);

   fclose(fp);

   return 0;

}
