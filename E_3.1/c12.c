#include <stdio.h>
#include <math.h>

int main()
{
    int  n, i;
    double a, area;

    printf("Enter sq: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Enter side: ");
        scanf("%lf", &a);
        area = a * a;
        printf("%.2lf\n", area);
    }

    return 0;
}
