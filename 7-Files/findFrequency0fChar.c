#include <stdio.h>

int find(char* cp ,char c){

int i;
i=0;

while ( *cp !='\0') {

if(*cp==c)
i++;
  *cp++;
}

return i;

}


int main(int argc, char const *argv[]) {

char* cp;
char c;
int frequency;
printf("Enter a string:");
scanf("%s",cp);

getchar();// to consume null terminating character

printf("Enter a character to find the frequency:");
scanf("%c",&c);

frequency=find(cp,c);
printf("Frequency of %c = %d\n",c,frequency);

  return 0;

}
