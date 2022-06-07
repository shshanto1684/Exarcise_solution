#include <stdio.h>

int main()
{
    int  shoe, porbot, pahar, tila;
    printf("Enter shoe size: ");
    scanf("%d", &shoe);
    printf("Enter next all: ");
    scanf("%d%d%d", &porbot, &pahar, &tila);

    if(shoe == porbot) {
        printf("This shoe can get gift porbot.");
    }
    else if(shoe == pahar) {
        printf("This shoe can get gift pahar.");
    }
    else if(shoe == tila) {
        printf("This shoe can get gift tila.");
    }
    else {
        printf("Nobody can't get this gift shoe.");
    }
    printf("\n");

    return 0;
}
