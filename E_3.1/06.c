#include <stdio.h>

int main()
{
    int num, revers = 0;
    int reminder = 0;

    scanf("%d", &num);
    while(num > 0) {
        reminder = num % 10;
        revers = revers * 10 + reminder;
        num = num / 10;
    }
    printf("%d", revers);
    return 0;
}
