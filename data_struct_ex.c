// data structures exercise
// Declare a struct that contains two fields of type int
// Declare an array containing ten of these structs
// Loop through the array and set the first struct field to values 0-9
// and the second field to values 10-1
// Loop through the array again and print both struct fields for each array element

#include <stdio.h>

int main(void)
{
    struct Two_ints     // struct with 2 fields of int
    {
        int num1;
        int num2;
    };

    struct Two_ints array[10];  // array of 10 structs

    for(int i = 0; i < 10; ++i)
    {
        array[i].num1 = i;
        array[i].num2 = 10 - i;
    }

    for(int i = 0; i < 10; ++i)
    {
        printf("%d-%d\n", array[i].num1, array[i].num2);
    }

    printf("\n");

    return 0;
}