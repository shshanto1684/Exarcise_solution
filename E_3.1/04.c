#include <stdio.h>

int main()
{
    char c = 'S';
    int  n, i;

    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("%c ", c);
    }
    printf("\n");

    return 0;
}
