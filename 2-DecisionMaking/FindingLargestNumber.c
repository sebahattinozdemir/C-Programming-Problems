#include <stdio.h>
int main()
{
    
    
    //Finding largest number among three
    
    int n1,n2,n3;
    
    printf("Enter three diffrent number:");
    	scanf("%d %d %d",&n1,&n2,&n3);
    
    if(n1>=n2 && n1>=n3)
    	printf("Largest Number:%d\n",n1);
    		else if(n2>=n1 && n2>=n3)
    	printf("Largest Number:%d\n",n2);
    		
    			else if (n3>=n1 && n3>=n2)
    				printf(	"Largest Number:%d\n",n3);
    
    
    
    return 0;
}
