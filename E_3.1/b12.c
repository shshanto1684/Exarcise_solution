#include <stdio.h>
#include <math.h>

int main()
{
    int   n, i, r, pi;
    float area;

    printf("Enter circle number: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Enter radius: ");
        scanf("%d", &r);
        pi = acos(-1);
        area = 2 * pi * r * r;
        printf("Area is %.2f\n", area);
    }
    printf("\n");

    return 0;
}
