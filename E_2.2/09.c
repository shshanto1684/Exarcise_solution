#include <stdio.h>

int main()
{
    int  h1, h2, h3, h4, h5;

    scanf("%d%d%d%d%d", &h1, &h2, &h3, &h4, &h5);
    if(h1 > h2 || h1 > h3 || h1 > h4 || h1 > h5 || h2 > h1 || h3 > h1 || h4 > h1 || h5 > h1 || h2 > h3 || h2 > h4 || h2 > h5 || h3 > h4 || h3 > h5 || h4 > h3 || h5 > h3) {
        printf("Most lengthy parson hight is %d");
    }
    printf("\n");

    return 0;
}
