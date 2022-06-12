#include <stdio.h>

int main()
{
    int  nudus[2], total;

    for(int i=0; i<2; i++) {
        scanf("%d", &nudus[i]);
    }

    total = (nudus[0] * 12 + nudus[1] * 12) *3;
    printf("%d\n", total);

    return 0;
}

