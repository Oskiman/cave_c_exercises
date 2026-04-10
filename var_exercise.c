#include <stdio.h>

int main(void)
{
    printf("Enter a number(0 - 9)");
    int num = getchar();
    int miles = num - '0';  // -'0' converts to int
    printf("%d miles is %.2f kilometres\n", miles, miles * 1.6);

    return 0;
}