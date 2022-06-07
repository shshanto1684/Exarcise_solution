#include <stdio.h>

int main()
{
    int  i, j, num;

    for(i = 1; i <= 3; i++) {
        scanf("%d", &num);

    }
    for(i = 3; i >= 1; i--) {
        for(j = 1; j <= 10; j++) {
            printf("%d X %d = %d\n", num, j, num*j);
            }
        }

    return 0;
}
