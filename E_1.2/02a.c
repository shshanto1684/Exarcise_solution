#include <stdio.h>
#include <math.h>

int main()
{
    int x, result;
    scanf("%d", &x);
    result = pow(x, 2) - 5 * x + 12;
    printf("%d\n", result);

    return 0;
}
