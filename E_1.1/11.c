#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Friends: ");
    scanf("%d", &i);
    printf("Fruits: ");
    scanf("%d", &j);
    n = j / i;
    printf("%d\n", n);
    return 0;
}
