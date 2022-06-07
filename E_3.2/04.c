#include <stdio.h>

int main()
{
    int  num, i, max;

    scanf("%d", &num);
    max = num;

    for(i = 1; i < 10; i++) {
        scanf("%d", &num);
        if(num == max) {
            max = num;
        }
    }

    printf("%d", max);

    return 0;
}
