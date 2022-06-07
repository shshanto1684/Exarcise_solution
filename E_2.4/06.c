#include <stdio.h>

int main()
{
    int  swming;

    scanf("%d", &swming);

    if(swming == 3) {
        printf("We can eat Pizza.");
    }
    else if(swming == 2) {
        printf("We can eat Chinagi.");
    }
    else if(swming == 1) {
        printf("We can eat Ice-crime.");
    }
    else {
        printf("We can eat Chocolate.");
    }
    printf("\n");

    return 0;
}
