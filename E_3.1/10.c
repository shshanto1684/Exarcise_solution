#include <stdio.h>

int main()
{
    int  i, num, n, sum = 0;
    float avar;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        sum = sum + num;
    }
    avar = sum / n;
    printf("%.2lf", avar);
    printf("\n");

    return 0;
}
