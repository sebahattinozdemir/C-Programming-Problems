#include<stdio.h>


/*A leap year is exactly divisible by 4 except for century years (years ending with 00). 
  The century year is a leap year only if it is perfectly divisible by 400.*/


int main(){
	

int year;

printf("Enter a year:");
scanf("%d",&year);	
	
if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            // year is divisible by 400, hence the year is a leap year
            if ( year%400 == 0)
                printf("%d is a leap year.", year);
            else
                printf("%d is not a leap year.", year);
        }
        else
            printf("%d is a leap year.", year );
    }
    else
        printf("%d is not a leap year.", year);
	
	
	
	
	
	return 0.;
}
