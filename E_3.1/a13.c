#include <stdio.h>
#include <math.h>

int main()
{
    int  x, y;

    for(x = 1; x <= 100; x++) {
        y = pow(x, 2);
        printf("%d\n", y);
    }

    return 0;
}
