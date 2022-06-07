#include <stdio.h>

int main()
{
    int  num, reminder, i, bin = 0;

    scanf("%d", &num);
    while(num > 0) {
        reminder = num % 2;
        bin = bin * 10 + reminder;
        num = num / 2;
    }
    printf("%d", bin);
    printf("\n");

    return 0;
}
