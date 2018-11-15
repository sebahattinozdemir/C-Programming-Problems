
#include<stdio.h>


int main(void){
	int rows,cols,rows1,cols1;
	int i,j;
	
	
	printf("Enter rows and column for first matrix:");
	scanf("%d %d",&rows,&cols);
	
	int matrix[rows][cols];
	
	printf("Enter rows and column for second matrix:");
	scanf("%d %d",&rows1,&cols1);
	
	int matrix1[rows1][cols1];
	
	while(cols!=rows1){
		printf("Error ! column of first matrix not equal to row of second.\n");
		
		printf("Enter rows and column for second matrix:");
		scanf("%d %d",&rows1,&cols1);
	}	
	

	/**********************************************************************************/
	printf("Enter elements of first matrix:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("Enter elements a%d%d:",i,j);
			scanf("%d",&matrix[i][j]);
		}
		printf("\n");
	}
	
   /*************************************************************************************/
	printf("Enter elements of second  matrix:\n");
	for(i=0;i<rows1;i++){
		for(j=0;j<cols1;j++){
			printf("Enter elements a%d%d:",i,j);
			scanf("%d",&matrix1[i][j]);
		}
		printf("\n");
	}
	
/**************************************************************************************/

int multiplyMatrix[rows][cols1];

for(i=0; i<rows; ++i)
        for(j=0; j<cols1; ++j)
        {
            multiplyMatrix[i][j] = 0;
        }

int k;
for(i=0;i<rows;i++){
	
	for(j=0;j<cols1;j++){
		
		for(k=0; k<cols; ++k)
            {
                multiplyMatrix[i][j]+=matrix[i][k]*matrix1[k][j];
            }
		
	}
}


/*********************************************************************************************/

printf("output matrix:\n");
for(i=0;i<rows;i++){
	for(j=0;j<cols1;j++){
		printf("%d ",multiplyMatrix[i][j]);
	}
	printf("\n");
}

	
	return 0;
}
