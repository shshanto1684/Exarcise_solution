#include <stdio.h>

int main()
{
    int  cp_1st, gonit_j, progr_aj, total_money, total_book = 0;

    printf("Enter price of cp book, gonit korbo joy, programming arcajogot, Total Money : ");
    scanf("%d%d%d%d", &cp_1st, &gonit_j, &progr_aj, &total_money);
    if(cp_1st < total_money) {
        total_book = total_book + 1;
        total_money = total_money - cp_1st;
    }
    if(progr_aj < total_money) {
        total_book = total_book + 1;
        total_money = total_money - progr_aj;
    }
    if(gonit_j < total_money) {
        total_book = total_book + 1;
        total_money = total_money - gonit_j;
    }
    printf("%d\n", total_book);

    if(total_book == 1) {
        printf("Cp book ");
    }
    else if(total_book == 2) {
        printf("Cp book, Gonit korbo joy ");
    }
    else if(total_book == 3) {
        printf("Cp book, Gonit korbo joy, Programming arcojogot. ");
    }
    printf("\n");

    return 0;
}
