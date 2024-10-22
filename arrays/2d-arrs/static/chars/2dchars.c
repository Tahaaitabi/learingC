#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows;
    int cols;
    printf("How many rows do you need?\n");
    scanf("%d", &rows);
    printf("How many cols do you need?\n");
    scanf("%d", &cols);

    // Allocate mem
    char **arr = (char **)malloc(sizeof(char *) * rows);
    if (arr == NULL)
    {
        printf("Error allocating memory");
        return 1;
    }

    for(int i = 0; i < rows; i++)
    {
        arr[i] = (char *)malloc(sizeof(char) * cols);
        if (arr[i] == NULL)
        {
            printf("Error allocating memory");
            for(int j = 0; j < i; j++)
            {
                free(arr[j]);
            }
            free(arr);
            return 1;
        }
    }

    // initialize mem
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("Enter a value for arr[%d][%d]:\n", i, j);
            scanf(" %c", &arr[i][j]);
        }
    }

    printf("\n");
    printf("Result:\n");

    // Print result
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < rows; i++)
    {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
