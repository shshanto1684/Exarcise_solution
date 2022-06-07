#include <stdio.h>

int main()
{
    int  a, b, c, i, j, k;

    scanf("%d%d%d%d%d%d", &a, &b, &c, &i, &j, &k);

    printf("{{%d, %d}, {%d, %d}, {%d, %d}, {%d, %d}, {%d, %d}, {%d, %d}, {%d, %d}, {%d, %d}, {%d, %d}", a, i, a, j, a, k, b, i, b, j, b, k, c, i, c, j, c,k);

    return 0;
}
