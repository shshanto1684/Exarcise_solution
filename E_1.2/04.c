#include <stdio.h>
#include <math.h>

int main()
{
    float a, area;
    printf("Enter square side: ");
    scanf("%f", &a);
    area = 2 * pow(a, 2);
    printf("The area is %.2f\n", area);

    return 0;
}
