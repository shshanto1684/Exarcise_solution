#include <stdio.h>

int main()
{
    float km_far_hour, mile_far_hour;
    scanf("%f", &km_far_hour);
    km_far_hour = mile_far_hour * 1.61;
    printf("%.2f\n", mile_far_hour);// 1 mile_far_hour = 1.61 km

    return 0;
}
