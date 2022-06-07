#include <stdio.h>

int main()
{
    int  a, b, c, d, low, mid1, mid2, hig;

    scanf("%d%d%d%d", &a, &b, &c, &d);
    // 1st logic
    if(a>b) {
        mid1 = a;
        low = b;
    }
    // 2nd logic
    if(b>a) {
        mid1 = b;
        low = a;
    }
    // 3rd logic
    if(mid1>c) {
        mid2 = mid1;
        if(low>c) {
            mid1 = low;
            low = c;
        }
        if(c > low) {
            mid1 = c;
        }
    }
    if(c>mid1) {
        mid2 = c;
    }
    // 4th logic
    printf("%d %d %d %d", low, mid1, mid2, hig);
    printf("\n");

    return 0;
}
