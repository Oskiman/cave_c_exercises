/* Create a function that fills an array with the first
n numbers of the fibonacci sequence.
0, 1, 1, 2, 3, 5, 8, 13, 21...
where each number is derived by adding the two previous numbers

The function should receive two arguments: an array to
fill with numbers and the number of values to place
in the array

Place the function in a .c file, but also create a header file
containing its prototype*/

#include <stdio.h>

void fibonacci(int num, int fib_array[])
{
    if(num < 1)     // no values to add to array so return
    {
        return;
    }

    fib_array[0] = 0;   // we need to begin at 0

    if(num > 1)
    {
        fib_array[1] = 1;   // the second element has to be set to 1
    }

    for(int i = 2; i < num; ++i)    // we start the loop at 2 because [0] & [1] are used above
    {
        fib_array[i] = fib_array[i - 1] + fib_array[i - 2];
    }
}