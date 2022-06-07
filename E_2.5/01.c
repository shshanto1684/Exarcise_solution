#include <stdio.h>

int main()
{
    int  a, b, c, d, largest, largest_2nd;

    scanf("%d%d%d%d", &a, &b, &c, &d);
    if(a>b) {
        largest = a;
        largest_2nd = b;
    }
    else {
        largest = b;
        largest_2nd = a;
    }
    if(c>largest) {
        largest = c;
    }
    if(d>largest) {
        largest = d;
    }
    printf("%d %d", largest, largest_2nd);
    printf("\n");

    return 0;
}
