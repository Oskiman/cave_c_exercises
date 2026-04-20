#include <stdio.h>
#include "includes/func_ex.h"

int main(void)
{
    printf("Enter a number: ");
    int num = 0;
    scanf("%d", &num);
    int fib_array[num];

    fibonacci(num, fib_array);

    for(int i = 0; i < num; ++i)
    {
        printf("%d ", fib_array[i]);
    }

    printf("\n");

    return 0;
}