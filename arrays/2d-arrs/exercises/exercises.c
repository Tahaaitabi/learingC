/*
----------------------------------------------------------------
----------------------------------------------------------------

Exercise 1: Static 2D Array Initialization

1. Task: Create a static 3x3 2D array of integers and initialize it with values from 1 to 9. Then, print the array in a matrix format.

Example Output:

1 2 3
4 5 6
7 8 9
  
----------------------------------------------------------------
----------------------------------------------------------------

Exercise 2: Dynamic 2D Array with User Input

2. Task: Write a program that asks the user for the number of rows and columns for a 2D array. Allocate memory dynamically and allow the user to fill the array with integers. Finally, print the array.

Hints: Remember to free the memory after use.

----------------------------------------------------------------
----------------------------------------------------------------

Exercise 3: Sum of Each Row

3. Task: Modify the program from Exercise 2 to calculate and print the sum of each row of the 2D array.

Example Output:

Row 0 Sum: 15
Row 1 Sum: 12

----------------------------------------------------------------
----------------------------------------------------------------

*/

#include <stdio.h>
#include <stdlib.h>
void exercise1()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
}

void exercise2()
{
    int rows;
    int cols;
    printf("Enter required number of rows:\n");
    scanf("%d", &rows);
    printf("Enter required number of columns:\n");
    scanf("%d", &cols);

    // memory allocation
    int **arr = (int **)malloc(sizeof(int*) * rows); // Allocate rows
    for(int i = 0; i < rows; i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * cols); // Allocate columns
    }

    // Initialize:
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            arr[i][j] = i * cols + j + 1;
        }
    }

    // print:
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free allocated mem:
    for(int i = 0; i < rows; i++)
    {
        free(arr[i]);
    }
    free(arr);
}

void exercise3()
{
}

int main()
{
    printf("Exercise 1:\n");
    exercise1();
    printf("\n");
    printf("Exercise 2:\n");
    exercise2();
    printf("\n");
    printf("Exercise 3:\n");
    exercise3();
    return 0;
}

