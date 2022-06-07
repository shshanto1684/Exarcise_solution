#include <stdio.h>

int main()
{
    int  taka_have, icecrimehakar_come, sauceshakar_come;

    scanf("%d %d", &taka_have, &sauceshakar_come);
    icecrimehakar_come = taka_have >= 10;
    //printf("%d\n%d\n", icecrimehakar_come, sauceshakar_come);
   if(icecrimehakar_come == 0) {
        printf("Rahin can't eat ice-crime.\n");
    }
    else {
        printf("Rahin can eat ice-crime.\n");
    }
    if(sauceshakar_come == 0) {
        printf("Rahin can't eat sauces.\n");
    }
    else {
        printf("Rahin can eat sauces.");
    }

    printf("\n");

    return 0;
}
