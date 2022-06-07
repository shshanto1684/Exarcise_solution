#include <stdio.h>

int main()
{
    float length,width, area_of_rectangle;
    scanf("%f %f", &length, &width);
    area_of_rectangle = 2 * (length + width);
    printf("The area of rectangle is %.2f\n", area_of_rectangle);

    return 0;
}
