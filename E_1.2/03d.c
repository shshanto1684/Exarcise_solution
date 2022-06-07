#include <stdio.h>

int main()
{
    float meter, feet;
    scanf("%f", &meter);
    feet = meter * 3.29; // 1 meter = 3.29 feet
    printf("%.2f\n", feet);

    return 0;
}
