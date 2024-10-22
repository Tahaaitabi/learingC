# 2 Dimensional Arrays

Two dimensional arrays are arrays that can grow in two directions. 

Traditional arrays can only grow one way (towards the right usually) and thus only enable us to represent one set of contiguos data of the same type.

For example:

`int arr[20];` => This array let's us represent a set of 20 integers. In terms of dimensions a row of 20 integers.

**Visual representation of arr[20]**

 arr    ∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞
index = | 0 | 1 | 2 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | = arr[20];
        ∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞

 arr    ∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞
value = | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | = arr[0]...arr[20].
        ∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞

So 1D arrays allow us to represent a single row of arrays.

**How would we represent the following?** 

A 3x3 rectangle of int's: 

[1][2][3]
[4][5][6]
[7][8][9]

One way to do this is to use a static 2D-array.

With a static 2D-array we can use the following syntax = 

```c
type arr_name[row_arr_size][column_arr_size] = {{first_value, second_value, third_value},{first_value, second_value, third_value},{first_value, second_value, third_value}};
```

**Visual representation**

                  ∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞
                  ||  column 0   ||  column 1   ||   column 2  ||    
                  ∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞

                         |              |               |
                         V              V               V
                  _______________________________________________ 
                  |||||||||||||||||||||||||||||||||||||||||||||||   
                  ||    ∞∞∞∞∞    ||    ∞∞∞∞∞    ||    ∞∞∞∞∞    ||   
 First row 0 =>   ||    | 1 |    ||    | 2 |    ||    | 3 |    || 
                  ||    ∞∞∞∞∞    ||    ∞∞∞∞∞    ||    ∞∞∞∞∞    ||   
                  |||||||||||||||||||||||||||||||||||||||||||||||
                  ||    ∞∞∞∞∞    ||    ∞∞∞∞∞    ||    ∞∞∞∞∞    ||
Second row 1 =>   ||    | 5 |    ||    | 6 |    ||    | 7 |    ||
                  ||    ∞∞∞∞∞    ||    ∞∞∞∞∞    ||    ∞∞∞∞∞    ||
                  |||||||||||||||||||||||||||||||||||||||||||||||
                  ||    ∞∞∞∞∞    ||    ∞∞∞∞∞    ||    ∞∞∞∞∞    ||
 Third row 2 =>   ||    | 7 |    ||    | 8 |    ||    | 9 |    ||
                  ||    ∞∞∞∞∞    ||    ∞∞∞∞∞    ||    ∞∞∞∞∞    ||
                  |||||||||||||||||||||||||||||||||||||||||||||||

This is the visual representation of 3 rows and 3 columns. 

In code this would be:

`int arr[3][3];`

Before we move on further the same thing applies to 2D arrays as with 1D-arrays.

That is that there are two ways to initialize an array:

1 - Statically.
2 -Dynamically.


## Static 2D-array

A static 2D-array can be initialized upon declaration of said array like so:

```c
#include <stdio.h>
int main()
{
int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("%d", arr[i][j]);
    }
    printf("\n");
}
}
```

Static because we are assigning the values of each index (for all 3 arrays) at the time of declaration. This requires us to know the values beforehand.


# Dynamic 2D-array

In order to achieve the same thing but dynamically we're going to have to include 'stdlib.h' so we can make use of malloc() and free().

We're also going to make it so that the user can set the size of columns and rows, making it dynamic.
