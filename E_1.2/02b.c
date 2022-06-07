#include <stdio.h>
#include <math.h>

int main()
{
    int x, e = 2.72, result;
    scanf("%d", &x);
    result = pow(e, 5*x - 1);
    printf("%d", result);

    return 0;
}
