#include <stdio.h>

int main()
{
    float cm, inch;
    printf("Please enter centimeter : ");
    scanf("%f", &cm);
    inch = cm / 2.54; // 1 inch = 2.54 cm
    printf("%.0f centimeter = %.2f inch.\n", cm, inch);

    return 0;
}
