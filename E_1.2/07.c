#include <stdio.h>
#include <math.h>
int main()
{
    float cube_area, cube_length_a, surfacers_area;
    scanf("%f", &cube_length_a);
    cube_area = pow(cube_length_a, 3);
    surfacers_area = 6 * pow(cube_length_a, 2);
    printf("Cube Area is %.2f\n", cube_area);
    printf("Surfacers Area is %.2f\n", surfacers_area);

    return 0;
}
