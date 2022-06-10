#include <stdio.h>

int main()
{
    int  product[10], cost[10], total_cost[10];
    int i, j, sum = 0;

    printf("Enter product cost: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &cost[i]);
    }

    printf("Enter product: ");
    for(int j = 0; j <10; j++) {
            scanf("%d", &product[j]);
        }

    for(i = 0; i < 10; i++) {
        total_cost[i] = cost[i] * product[j];
        printf("%d ", total_cost[i]);

    }

    sum = sum + total_cost[10];
    printf("%d", sum);

    return 0;
}
