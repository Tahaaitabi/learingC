#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct 
{
    int id; // Task id.
    char *start; // Start date;
    char *end; // Projected end date;
    char *title; // Task title.
    char *content; // Task content.
} task;

// Print task members.
void printTask(task *p)
{
    printf("\n");
    printf("[New task]:\n");
    printf("Id: %d\n", p->id);
    printf("Task start date: %s\n", p->start);
    printf("Task end date: %s\n", p->end);
    printf("Task title: %s\n", p->title);
    printf("Task content: %s\n", p->content);
}

// Clean input by removing trailing \n character.
void clean(char *p)
{
    int size = strlen(p);
    if (p[size - 1] == '\n')
        p[size -1] = '\0'; 
}

// De-allocate allocated  memory for each member.
void freetasks(task *p)
{
    if (p->start) free(p->start);
    if (p->end) free(p->end);
    if (p->title) free(p->title);
    if (p->content) free(p->content);
}

// Assign values to members based on user input.
int createTask(task *p)
{
    char temp[100];
    // Set task ID:
    printf("Enter task id:\n");
    if (scanf("%d", &p->id) != 1)
    {
        printf("Invalid type, please use numbers!\n");
        return 1;
    }
    while(getchar() != '\n');

    // Set task start date:
    printf("Enter task start date (dd/mm/yyyy):\n");
    if (fgets(temp, sizeof(temp), stdin) == NULL)
    {
        printf("Error reading input!\n");
        return 1;
    }
    clean(temp);
    int startsize = strlen(temp);
    p->start = (char *)malloc(startsize + 1);
    if (p->start == NULL)
    {
        printf("Error allocating memory!\n");
        return 1;
    }
    strcpy(p->start, temp);

    // Set task end date:
    printf("Enter task end date (dd/mm/yyyy):\n");
    if (fgets(temp, sizeof(temp), stdin) == NULL)
    {
        printf("Error reading input!\n");
        return 1;
    }
    clean(temp);
    int endsize = strlen(temp);
    p->end = (char *)malloc(endsize + 1);
    if (p->end == NULL)
    {
        // Err message.
        printf("Error allocating memory!\n");
        // De-allocate previoysly allocated memory.
        freetasks(p);
        // Return error and exit
        return 1;
    }

    strcpy(p->end, temp);

    // Set task title:
    printf("Enter task title:\n");
    if (fgets(temp, sizeof(temp), stdin) == NULL)
    {
        printf("Error reading input!\n");
        return 1;
    }
    clean(temp);
    int titlesize = strlen(temp);
    p->title = (char *)malloc(titlesize + 1);
    if (p->title == NULL)
    {
        // Err message.
        printf("Error allocating memory!\n");
        // De-allocate previoysly allocated memory.
        freetasks(p);
        // Return error and exit
        return 1;
    }

    strcpy(p->title, temp);

    // Set task content:
    printf("Enter task content:\n");
    if (fgets(temp, sizeof(temp), stdin) == NULL)
    {
        printf("Error reading input!\n");
        return 1;
    }
    clean(temp);
    int contentsize = strlen(temp);
    p->content = (char *)malloc(contentsize + 1);
    if (p->content == NULL)
    {
        // Err message.
        printf("Error allocating memory!\n");
        // De-allocate previoysly allocated memory.
        freetasks(p);
        // Return error and exit
        return 1;
    }
    strcpy(p->content, temp);

    printTask(p);

    // Successfully created a new task.
    return 0;
}

int main()
{    
    // Allocate space for a new task struct dynamically:
    task *newtask = (task *)malloc(sizeof(*newtask));
    if (newtask == NULL)
    {
        // Error message upon failure.
        printf("Error creating structure!\n");
        return 1;

    } 
    // Assign values to members.
    if(createTask(newtask) == 0)
    {
        // De-allocate memory.
        freetasks(newtask);
        free(newtask);
        // Return success code.
        return 0;
    } 
    else 
    {
        // Error message.
        printf("Error creatng new task!\n");
        // De-allocate memory.
        freetasks(newtask);
        free(newtask);
        // Return error message.
        return 1;
    }
}
