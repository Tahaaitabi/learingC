#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rows; // int to hold amount of user specified rows.
    int cols; // int to hold the amount user specified columns.
 
    printf("How many rows do you need?\n");
    scanf("%d", &rows);
    printf("How many columns do you need?\n");
    scanf("%d", &cols);

    // Memory allocation;
    int **arr = (int **)malloc(sizeof(int*) * rows);
    for(int i = 0; i < rows; i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * cols);
    }

    // Initialization:
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            arr[i][j] = i * cols + j + 1;
        }
    }

    printf("Result:\n");
    // Print the arrays
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("[%d]", arr[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++)
    {
        free(arr[i]);
    }
    free(arr);
    return 0;
}
