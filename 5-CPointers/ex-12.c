#include<stdio.h>

void print(char* a );
int main(){

char a[] = "HELLO MADAFAKA";
print(a);
return 0;
}

void print(char* a){

while(*a!= '\0')
printf("%c ",*a++);


}
