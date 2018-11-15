#include<stdio.h>

int   increment (int *a){// call by reference (int a) then does not change

    *a=*a+1;
    return *a;

}
int main(){


int a;
a=10;

printf("before calling increment func:a:%d\n",a);

increment(&a);

printf("after calling increment func:a:%d\n",a);


return 0;
}
