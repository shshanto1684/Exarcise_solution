#include <stdio.h>

int main()
{
    char a, b, c, i, j, k;
    scanf("%c%c%c%c%c%c", &a, &b, &c, &i, &j, &k);

    printf("{{%c, %c}, {%c, %c}, {%c, %c}, {%c, %c}, {%c, %c}, {%c, %c}, {%c, %c}, {%c, %c}, {%c, %c}}", a, i, a, j, a, k, b, i, b, j, b, k, c, i, c, j, c, k);

    return 0;
}
