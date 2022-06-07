#include <stdio.h>

int main()
{
    int  water_poat_temperature, water_condition;

    scanf("%d", &water_poat_temperature);
    if(water_poat_temperature <= 0){
        printf("%d  water is ice.", water_poat_temperature);
    }
    if(water_poat_temperature > 0 && water_poat_temperature <= 100) {
        printf("%d  water is liquid.", water_poat_temperature);
    }
    if(water_poat_temperature > 100) {
        printf("%d  water is aerial.", water_poat_temperature);
    }
    printf("\n");

    return 0;
}
