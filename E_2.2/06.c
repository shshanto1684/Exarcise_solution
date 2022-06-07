#include <stdio.h>

int main()
{
    int  n;

    scanf("%d", &n);
    if((n % 3 != 0 && n % 5 == 0) || (n % 3 == 0 && n % 5 != 0)) {
        printf("The number %d is purnoborgo.", n);
    }
    printf("\n");

    return 0;
}
