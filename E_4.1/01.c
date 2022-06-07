#include <stdio.h>

int main()
{
    int numbers[ ] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, j, tem;

    /*for(i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }*/

        for(i = 0; i < 5; i++) {
        tem = numbers[j];
        numbers[j] = numbers[i];
        numbers[i] = tem;
    }

    for(j = 9; j >= 0; j--) {
        printf("%d ", numbers[j]);
    }

    return 0;
}
