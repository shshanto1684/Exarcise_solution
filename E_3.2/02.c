#include <stdio.h>

int main()
{
    int  i;
    for (i = 2; i <= 200; i = i + 2)
    {
        printf("%4d  ", i * 7);
    }
    printf("\n");

    return 0;
}
