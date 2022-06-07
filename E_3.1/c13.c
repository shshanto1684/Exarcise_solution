#include <stdio.h>
#include <math.h>
int main()
{
    double  x, y;

    for(x = 1; x <= 100; x++) {
        y = pow(x, 3) - 6 *  pow(x, 2) / 19 + 42 * x / 71 - 3701 / 9993;
        printf("%.2lf\n", y);
    }
    printf("\n");

    return 0;
}
