#include <stdio.h>

int main()
{
    int  grad;

    scanf("%d", &grad);
    if(grad >= 80 && grad <= 100) {
        printf("A+");
    }
    else if(grad >= 70 && grad <= 79) {
        printf("A");
    }
    else if(grad >= 60 && grad <= 69) {
        printf("A-");
    }
    else if(grad >= 50 && grad <= 59) {
        printf("B");
    }
    else if(grad >= 40 && grad <= 49) {
        printf("C");
    }
    else if(grad >= 33 && grad <= 39) {
        printf("D");
    }
    else if(grad < 33) {
        printf("F");
    }
    printf("\n");

    return 0;
}
