#include <stdio.h>

int main()
{
    float inch, cm;
    scanf("%f", &inch);
    cm = inch * 2.54; // 1 inch = 2.54 cm
    printf("%.2f\n", cm);

    return 0;
}
