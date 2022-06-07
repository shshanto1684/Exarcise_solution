#include <stdio.h>
#include <math.h>

int main()
{
    float r, hight, dimensional, surface_area, pi;
    scanf("%f%f", &r, &hight);
    pi = acos( -1); //
    dimensional = pi * r * r * hight;
    surface_area = 2 * pi * r * (r + hight);
    printf("Dimensional is %.2f\n", dimensional);
    printf("Surface Area is %.2f\n", surface_area);

    return 0;
}
