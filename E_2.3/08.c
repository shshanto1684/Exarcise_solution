#include <stdio.h>

int main()
{
    int  x, y, m;

    scanf("%d%d%d", &x, &y, &m);
    if(4*x * m > 4*y * m) {
        printf("Rahamat");
    }
    else {
        printf("Bijoy");
    }
    printf("\n");

    return 0;
}
