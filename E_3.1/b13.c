#include <stdio.h>
#include <math.h>

int main()
{
    float  x, y;

    for(x = 1; x <= 100; x++) {
        y = pow(x, 2) * pow(x, 3);
        printf("%.2f\n", y);
    }
    printf("\n");

    return 0;
}
