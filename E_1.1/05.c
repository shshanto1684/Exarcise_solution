#include <stdio.h>
int main()
{
    int a, b, n;
    printf("Please enter pen cost:");
    scanf("%d", &a);
    printf("Please enter pen number: ");
    scanf("%d", &b);
    n = a * b;
    printf("%d * %d = %d", a, b, n);
    return 0;
}
