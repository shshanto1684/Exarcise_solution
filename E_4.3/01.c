#include <stdio.h>

int main()

{
    int television_lenth, television_cost, total_cost;

    scanf("%d %d", &television_lenth, &television_cost);

    total_cost = television_cost / television_lenth;

    printf("1 : %d", total_cost);

    return 0;
}
