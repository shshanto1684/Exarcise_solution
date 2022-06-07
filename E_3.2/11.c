#include <stdio.h>

int main()
{
    int  n, num, i, sum = 0;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num % 3 == 0) {
            sum = sum + 1;
        }
    }

    printf("%d", sum);
    printf("\n");

    return 0;
}
