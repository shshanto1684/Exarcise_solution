#include <stdio.h>

int main()
{
    int  i, j;

    for (i = 1; i <= 1001; i++) {
        for(j = 0; j < 7; j++) {
                if(i > 1001) {
                    break;
                }
             printf("%4d\t", i++);
        }
        printf("\n");
    }

    return 0;
}
