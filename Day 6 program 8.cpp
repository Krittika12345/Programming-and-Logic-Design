#include <stdio.h>

int main() 
{
    int rows, cols;

    // Input for the size of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols], transpose[cols][rows];

    // Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            printf("Enter element matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Transposing the matrix
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display the original matrix
    printf("Original matrix is:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Display the transposed matrix
    printf("Transposed matrix is:\n");
    for (int i = 0; i < cols; i++) 
	{
        for (int j = 0; j < rows; j++) 
		{      
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
