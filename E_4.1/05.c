#include <stdio.h>

int main()
{
    int  hight[12], i, j;

    for(i = 0; i < 12; i++) {
        scanf("%d", &hight[i]);
    }

    for(j = 12; j > 0; j--) {
        for(i= 0; i < j; i++) {
            if(hight[i]>hight[i+1]) {
                int m = hight[i];
                hight[i] = hight[i+1];
                hight[i+1] = m;
            }
        }
    }

    for(i = 0; i < 2; i++) {
        printf("%d ", hight[i]);
    }

    return 0;
}
