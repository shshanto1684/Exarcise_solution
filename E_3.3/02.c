#include <stdio.h>

int main()
{
    int  x, y, i, j;

    while(7) {
            scanf("%d%d", &x, &y);

        for(i = 1; i <= 7; i++) {
        for(j = 1; j <= 7; j++) {
                while(x) {
                    printf("*");
                }
            printf("-");
            }
        printf("\n");
        }
    }


    return 0;
}
