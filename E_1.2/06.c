#include <stdio.h>

int main()
{
    float rhombus_area, diagonal_a, diagonal_b;
    scanf("%f %f", &diagonal_a, &diagonal_b);
    rhombus_area = (diagonal_a * diagonal_b) / 2;
    printf("Rhombus Area is %.2f", rhombus_area);

    return 0;
}
