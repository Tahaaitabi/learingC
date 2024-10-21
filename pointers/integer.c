#include <stdio.h>
void printIntPointer(int *p)
{
    printf("Pointer address: %p\n", p);
    printf("Pointer value: %d\n", *p);
}

void integers()
{
    //Declare a variable.
    int A = 65;
    //Declare the pointer to the variable.
    int *pA = &A;
    //Print address & value.
    printIntPointer(pA);
    //Spacer
    printf("\n");
    //Change the value
    *pA = 66;
    //Print address & new value.
    printIntPointer(pA);
}

int main()
{
    integers();
}
