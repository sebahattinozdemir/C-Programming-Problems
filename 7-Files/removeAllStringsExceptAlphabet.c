#include<stdio.h>


int main(){

char cp[20000];
printf("Enter a string:");
fgets(cp,20000,stdin);

int i,j;
for(i=0;cp[i]!='\0';i++){

  while (!( (cp[i] >= 'a' && cp[i] <= 'z') || (cp[i] >= 'A' && cp[i] <= 'Z') || cp[i] == '\0') )
         {
             for(j = i; cp[j] != '\0'; ++j)
             {
                 cp[j] = cp[j+1];
             }
                 cp[j] = '\0';
         }

}

puts(cp);
return 0;
}
