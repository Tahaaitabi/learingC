#include <stdio.h>
#include <stdlib.h> // Needed to use malloc and free for dynamicNumArr().

// Static arr of numbers:
void nums()
{
    int nums[5];
    int len = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < len; i++)
    {
        printf("Enter a number:\n");
        scanf("%d", &nums[i]);
        while(getchar() != '\n');
        printf("You entered: %d\n", nums[i]);
    }

    for (int i = 0; i < len; i++)
        printf("Value at index[%d]: %d\n", i, nums[i]);
}

// Dynamic arr of numbers:
int dynamicNumArr()
{
    // We need to include stdlib.h to use malloc/free

    int size; // Size of the array to be specified by the user:
    printf("How many numbers will you need?\n"); // Prompt
    if (scanf("%d", &size) != 1) // Get user input.
    {
        printf("Invalid type! Please enter a whole number.\n");
        return 1;
    }
    while(getchar() != '\n'); // Clear the stdin buffer.

    // Dynamically allocate memory based on size spcified.
    int *num = (int *)malloc((sizeof(*num)) * size);
    if (num == NULL)
    {
        printf("Err allocating memory!\n");
        return 1;
    }
    
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value *num[%d]:\n", i);
        scanf("%d", &num[i]);
        printf("You entered: %d\n", num[i]);
    }

    printf("\n");

    printf("Results:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Value of *num[%d]: %d\n", i, num[i]);
    }

    free(num);

    return 0;
}

int main()
{
    nums();
    printf("\n");
    dynamicNumArr();
    return 0;
}
