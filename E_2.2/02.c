#include <stdio.h>

int main()
{
    int  museum_ticket_cost, have_money;

    scanf("%d %d", &museum_ticket_cost, &have_money);
    if(museum_ticket_cost <= have_money) {
        printf("I can go museum.");
    }
    if(museum_ticket_cost >= have_money) {
        printf("I can not go museum.");
    }
    printf("\n");

    return 0;
}
