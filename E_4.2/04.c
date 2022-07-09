#include <stdio.h>

int main()

{
    int number[5][4] ={{60, 80, 67, 90}, {93, 98, 95, 95}, {86, 81, 82, 98}, {73, 87, 80, 91},{80, 96, 45, 78}};
    int total[5] = {0}, avarage[5] = {0};
    for(int i=0; i<5; i++) {
        for(int j=0; j<4; j++) {
            total[i] += number[i][j];
            avarage[i] = total[i] /4;

        }
    }

    for(int i=0; i<5; i++) {
        printf("%d  %d\n", total[i], avarage[i]);
    }
    return 0;
}
