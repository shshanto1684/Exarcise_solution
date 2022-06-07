#include <stdio.h>

int main()
{
    int numbers[10];
    int i, j, tem;

    for(i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

        for(i = 0, j = 9; i < 10 && j > i; j--, i++) {
        tem = numbers[j];
        numbers[j] = numbers[i];
        numbers[i] = tem;
    }

    for(i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
