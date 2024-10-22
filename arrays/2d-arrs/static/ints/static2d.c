#include <stdio.h>
int main()
{
    // Declaring and initializing the 2d-array.
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    // For loop to print the array.
    for (int i = 0; i < 3; i++) // Outer loop for the rows.
    {
        for(int j = 0; j < 3; j++) // Inner loop for the columns.
        {
            printf("[%d]", arr[i][j]);
        }
        printf("\n");
    }
    
    // Return success code.
    return 0;
}
