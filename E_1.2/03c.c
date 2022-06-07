#include <stdio.h>

int main()
{
    float feet, meter;
    scanf("%f", &feet);
    meter = feet / 3.29;//1 feet = 3.29 meter
    printf("%.2f", meter);

    return 0;
}
