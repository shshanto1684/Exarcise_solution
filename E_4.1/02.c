#include <stdio.h>

int main()
{
    int  flower_tav, flower, i, sum = 0;

    printf("Enter flower tav: ");
    while(scanf("%d", &flower_tav) && flower_tav < 20) {
        flower_tav++;
    }

    for(i = 0; i < flower_tav; i++) {
        scanf("%d", &flower);
        sum = sum + i;
    }

    printf("%d\n", sum);

    return 0;
}
