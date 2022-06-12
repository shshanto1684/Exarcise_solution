#include <stdio.h>

int main()
{
    int  nudus[12] [2], total[2] = {0};
    int mean;

    for(int i=0; i <12; i++) {
        for(int j=0; j <2; j++) {
            scanf("%d", &nudus[i] [j]);
        }
    }

    for(int i=0; i<12; i++) {
        for(int j=0; j<2; j++) {
            total[i] += nudus[i] [j];
        }
    }

     int maximum;
    maximum = mean;

    for(int i=0; i<12; i++) {
        //printf("%d\n", total[i]);
        mean = total[i] /2;
        if(mean>maximum) maximum = mean;
        printf("%d\n", mean);
    }

    printf("Maximum: %d\n", maximum);
    return 0;
}

/*65 36
62 26
45 48
32 25
45 87
21 14
62 45
32 54
45 87
21 14
62 45
32 54*/
