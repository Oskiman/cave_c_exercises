// Ask for input 0 - 9
// If input is invalid, print message then quit
// otherwise, output multiplication table from 1 to input

#include <stdio.h>

int main(void)
{
    int input = 0;
    printf("Enter a number (0 - 9): ");
    input = getchar();
    int num = input - '0';
    printf("%d\n", num);

    if(num < 0 || num > 9)
    {
        printf("Invalid input\n");
    }
    else
    {
        // int count = 1;
        // while(count <= num)
        // {
        //     printf("%d x %d = %d\n", count, num, count * num);
        //     ++count;
        // }
        for(int i = 1; i <= num; ++i)
        {
            for(int j = 1; j <= num; ++j)
            {
                printf("%3d", i * j);
            }

            printf("\n");
        }
    }
    

    return 0;
}