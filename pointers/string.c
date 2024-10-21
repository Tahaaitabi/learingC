#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printCharPointer(char *p)
{
    int c = 0;
    while (p[c] != '\0')
    {
        c++;
    }
    if (p[c - 1] == '\n')
        p[c - 1] = '\0';


    printf("Pointer address: %p\n", p);
    printf("Pointer value: %s\n", p);
    printf("Pointer length: %d\n", c);
}

void staticArr()
{
    //Declare a char string literal in a variable.
    char name[] = "abcdef";
    //Declare the pointer to the variable.
    char *pName = name;
    //Print address and value.
    printf("'pName':\n");
    printCharPointer(pName);
    //Spacer
    printf("\n");
    //Change the value of the name variable.
    strcpy(pName, "ghklmn");
    //Print address and new value.
    printf("New 'pName':\n");
    printCharPointer(pName);
}
void dynamicArr()
{
    char *name = NULL;
    size_t len = 0;
    printf("Enter a name: \n");
    ssize_t read = getline(&name, &len, stdin);
    if (read != -1)
        printCharPointer(name);
    else
        printf("Error reading input.\n");
    free(name);
}


int main()
{
    staticArr();
    //Spacer
    printf("\n");
    dynamicArr();
}
