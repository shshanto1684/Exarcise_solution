#include <stdio.h>

int main()
{
    int  num, x;

    while(scanf("%d", &num) && num != 0) {
        x = num % 6;
        printf("%d", x);
    }
    printf("\n");

    return 0;
}
