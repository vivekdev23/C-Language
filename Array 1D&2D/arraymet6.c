#include<stdio.h>
int main() 
{

    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
	
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols],i,j;

    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            scanf("%d", &matrix2[i][j]);
        }
    }
	
	for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            if(matrix1[i][j]==0) 
				printf(" ");
			else if(matrix1[i][j]==0)
				printf(" ");
		
	printf("metrix is %d:%d", matrix1[i][j], matrix1[i][j]);
        }
    }

    return 0;
}
