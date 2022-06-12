#include <stdio.h>

int main()
{
    int  newspaper[3][7], total[3] = {0};

    for(int i=0; i<3; i++) {
        for(int j=0; j<7; j++) {
            scanf("%d", &newspaper[i][j]);
            total[i] += newspaper[i][j];
        }
    }
    int price[3], newspaper_sells[3];
    printf("Enter price: ");

    for(int i=0; i<3; i++) {
        scanf("%d", &price[i]);
        newspaper_sells[i] = total[i] * price[i];
        printf("Newspaper %d sells: %d\n", newspaper_sells[i]);
    }
    return 0;
}
