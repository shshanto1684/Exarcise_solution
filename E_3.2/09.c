#include <stdio.h>

int main()
{
    int  n, i, num;
    printf("Enter number: ");
    scanf("%d", &n);

    for( i = 1; i <= n; i++) {
        scanf("%d", &num);

        if(num % 2 == 0) {
            num = num / 2;
        }
        else {
            num = num * 3 + 1;
        }
        printf("%d ", num);
    }

    return 0;
}
