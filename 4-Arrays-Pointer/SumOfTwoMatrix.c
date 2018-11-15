#include<stdio.h>



int main(void){
/*******************************************************/	
	int rows,cols;
	
	printf("Enter number of rows(between 1 and 100):");
	scanf("%d",&rows);
	
	printf("Enter number of columns(betwwen 1 and 100):");
	scanf("%d",&cols);
/***************************************************/	
	int matrix1[rows][cols];
	printf("\n Enter elements of first matrix:\n");
	
	int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			
			printf("Enter element a%d%d: ",i+1,j+1);
			scanf("%d",&matrix1[i][j]);
		}
	}
	
/*******************************************************/	
	int matrix2[rows][cols];
	printf("\n Enter elements of second matrix:\n");
	
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			
			printf("Enter element a%d%d: ",i+1,j+1);
			scanf("%d",&matrix2[i][j]);
		}
	}
	
	
/******************************************************************/
	
	int sum [rows][cols];

for(i=0;i<rows;i++){
	for(j=0;j<cols;j++){
		
		sum[i][j]=matrix1[i][j]+matrix2[i][j];
	}
}
	
for(i=0;i<rows;i++){
	for(j=0;j<cols;j++){
		
		printf("%d ",sum[i][j]);
	}
	printf("\n");
}	
	
	
	
	
	return 0;
}
