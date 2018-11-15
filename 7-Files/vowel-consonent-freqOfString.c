#include<stdio.h>

void find(char* cp) {

  int wht=0;
  int vowel=0;
  int consonant=0;
  int digits=0;
  int i;


  for(i=0;cp[i] != '\0';i++) {

    if(cp [i] ==' ')
    wht++;
if(cp[i]=='1'|| cp[i]=='2' || cp[i]=='3'|| cp[i]=='4' || cp[i]=='5' || cp[i]=='6' || cp[i]=='7' || cp[i]=='8' || cp[i]=='9'|| cp[i]=='0')
     digits++;

if(cp[i] =='a' || cp[i]=='e' || cp[i]== 'u'|| cp[i]=='o'  || cp[i] =='i' ||
       cp[i]=='A' ||  cp[i]=='E'|| cp[i]== 'U' || cp [i]=='O' ||  cp[i]=='I'){
         vowel++;
}
else if((cp[i]>='a'&& cp[i]<='z') || (cp[i]>='A'&& cp[i]<='Z')) { consonant++;}


  }

  printf("Vowels:%d\n",vowel);
  printf("Consonants:%d\n",consonant);
  printf("Digits:%d\n",digits);
  printf("White spaces:%d\n",wht);
}


int main(){

char cp[20000];
printf("Enter a line of string:");

fgets(cp,20000,stdin);

find(cp);


return 0;
}
