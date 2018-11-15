#include<stdio.h>


int main(){
	int rows,cols;
	printf("Enter rows and columns of matrix:");
	scanf("%d",&rows);
	scanf("%d",&cols);
	
	
	printf("Enter element of matrix:\n");
	
	int i,j;
	int matrix[rows][cols];
	
	
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			
			printf("Enter element a%d%d: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	printf("Entered Matrix:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	
	printf("Transpose of matrix:\n");
	
	for(i=0;i<cols;i++){
		for(j=0;j<rows;j++){
		
			printf("%d ",matrix[j][i]);
		
		}
		printf("\n");
	}
	
	

	return 0;
}
