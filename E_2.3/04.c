#include <stdio.h>

int main()
{
    int  cow, goat;

    scanf("%d %d", &cow, &goat);
    if(cow < goat) {
        printf("Win");
    }
    else {
        printf("Lose");
    }
    if(cow == goat) {
        printf(" 0");
    }
    printf("\n");

    return 0;
}
