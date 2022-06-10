#include <stdio.h>

int main()
{
    int  n, i, j, x;
    printf("Enter number: ");
    scanf("%d", &n);
    int number[n];

    printf("Enter numbers: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &number[i]);
    }

    for(j = n; j > 0; j--) {
        for(i = 0; i < j; i++) {
            if(number[i]>number[i+1]) {
                x = number[i];
                number[i] = number[i+1];
                number[i+1] = x;
            }
        }
    }

    for(i = 0; i < n; i++) {
        printf("%d ", number[i]);
    }

    printf("\n");

    return 0;
}
