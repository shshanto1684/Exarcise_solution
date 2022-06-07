#include <stdio.h>

int main()
{
    int  obtain_number_of_math_exam, gin_number;

    scanf("%d %d", &obtain_number_of_math_exam, &gin_number);
    if(obtain_number_of_math_exam >= gin_number) {
        printf("He is gin.");
    }
    if(obtain_number_of_math_exam < gin_number) {
        printf("He is not gin.");
    }
    printf("\n");

    return 0;
}
