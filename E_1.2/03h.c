#include <stdio.h>

int main()
{
    float mile, km;
    scanf("%f", &mile);
    km = mile * 1.61; // 1 mile = 1.61 km
    printf("%.2f\n", km);

    return 0;
}
