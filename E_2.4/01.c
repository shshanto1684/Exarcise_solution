#include <stdio.h>

int main()
{
    int  tem;

    scanf("%d", &tem);
    if(tem <= 0) {
        printf("This water is Ice.");
    }
    else if(tem >= 0 && tem <= 100) {
        printf("This water is liquid.");
    }
    else {
        printf("This water is air.");
    }
    printf("\n");

    return 0;
}
