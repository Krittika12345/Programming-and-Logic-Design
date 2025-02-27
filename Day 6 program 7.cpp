#include <stdio.h>

int main() 
{
    int ar[2][2], br[2][2], result[2][2];

    // Input for the first matrix
    printf("Enter elements for the first 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) 
	{
        for (int j = 0; j < 2; j++) 
		{
            printf("Enter element ar[%d][%d]: ", i, j);
            scanf("%d", &ar[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter elements for the second 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) 
	{
        for (int j = 0; j < 2; j++) 
		{
            printf("Enter element br[%d][%d]: ", i, j);
            scanf("%d", &br[i][j]);
        }
    }

    // Adding the two matrices
    for (int i = 0; i < 2; i++) 
	{
        for (int j = 0; j < 2; j++) 
		{
            result[i][j] = ar[i][j] + br[i][j];
        }
    }

    // Display the result matrix
    printf("Sum of the two matrices is:\n");
    for (int i = 0; i < 2; i++) 
	{
        for (int j = 0; j < 2; j++) 
		{
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
