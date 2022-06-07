#include <stdio.h>

int main()
{
    int  a, b, c, low, mid, hig;

    scanf("%d%d%d", &a, &b, &c);
    if(a>b) {
        mid = a;
        low = b;
    }
    if(b>a) {
        mid = b;
        low = a;
    }
    if(mid > c) {
        hig = mid;
        if(low > c) {
            mid = low;
            low = c;
        }
        if(c > low) {
            mid = c;
        }
    }
    if(c > mid) {
        hig = c;
    }
    printf("%d %d %d", low, mid, hig);
    printf("\n");

    return 0;
}
