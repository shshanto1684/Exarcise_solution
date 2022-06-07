#include <stdio.h>

int main()
{
    int  n, i, hight, based;
    float area;
    printf("Enter tangle number: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Enter hight: ");
        scanf("%d", &hight);
        printf("Enter based: ");
        scanf("%d", &based);
        area = 0.5 * hight * based;
        printf("Area is %.2lf\n", area);
    }
    printf("\n");

    return 0;
}
