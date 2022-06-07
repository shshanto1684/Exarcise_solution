#include <stdio.h>

int main()
{
    int  violent_animal_N, chocolate_P;

    scanf("%d %d", &violent_animal_N, &chocolate_P);
    if(violent_animal_N <= chocolate_P) {
        printf("I can passing on forest.");
    }
    if(violent_animal_N > chocolate_P) {
        printf("I can not passing on forest.");
    }
    printf("\n");

    return 0;
}
