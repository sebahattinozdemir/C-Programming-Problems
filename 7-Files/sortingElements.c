#include<stdio.h>
#include <string.h>
//lexigeographical order
int main(){

char cp [10][10];
int i;
printf("Enter 10 words:\n");
for(i=0;i<10;i++){

fgets(cp[i],10,stdin);
}


char str1[10];
  char str2[10];
  int ret;
  char temp[20];
int j;
for(i=0;i<9;i++){

for(j=i+1;j<10;j++){

     if(strcmp(cp[i],cp[j])>0) {
       strcpy(temp,cp[i]);
       strcpy(cp[i],cp[j]);
       strcpy(cp[j],temp);
   }

}
}



printf("\nIn lexicographical order: \n");

for(i=0;i<10;i++){
  printf("%s",cp[i]);
}

return 0;

}
