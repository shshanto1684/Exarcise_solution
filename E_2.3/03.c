#include <stdio.h>
#include <math.h>
int main()
{
    int  r_a, r_b, pi, area_A, area_B, area_B_cm;

    scanf("%d %d", &r_a, &r_b);
    pi = acos(-1);
    area_A = 2 * pi * r_a * r_a;
    area_B = 2 * pi * r_b * r_b;
    area_B_cm = area_B * 2.54; // 1 inc = 2.54 cm
    //printf("%d\n%d\n%d\n", area_A, area_B, area_B_cm);
    if(area_A > area_B_cm) {
        printf("A");
    }
    else {
        printf("B");
    }
    printf("\n");

    return 0;
}
