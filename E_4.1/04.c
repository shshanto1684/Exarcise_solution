#include <stdio.h>

int main()
{
    int  number[10], i, j;

    for(i = 0; i < 10; i++) {
        scanf("%d", &number[i]);
    }

    for(j = 0; j < 10; j++) {
        for(i = 10; i > j; i--) {
             if(number[i]<number[i-1]) {
                int y = number[i];
                number[i] = number[i-1];
                number[i-1] = y;
             }
        }
    }
    for(i=10; i > 8; i--) {
        printf("%d ", number[i]);
    }

    return 0;
}
