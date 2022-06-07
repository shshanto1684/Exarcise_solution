#include <stdio.h>

int main()
{
    float km, mile;
    scanf("%f", &km);
    mile = km / 1.61;
    printf("%.2f\n", mile);// 1 mile = 1.61 km

    return 0;
}
