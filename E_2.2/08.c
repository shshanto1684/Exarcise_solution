#include <stdio.h>

int main()
{
    int  a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    if(6*b + 6*c <= 6*a) {
        printf("Yes, We can go picnic.");
    }
    printf("\n");

    return 0;
}
