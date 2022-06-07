#include <stdio.h>

int main()
{
    int  n, i;
    while(scanf("%d", &n) && n!= 0) {
        if(n % 6 == 0) {
            printf("Yes");
        }
        else {
            printf("No");
        }
    }

    printf("\n");

    return 0;
}
