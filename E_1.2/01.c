#include <stdio.h>

int main()
{
    int apple_number, apple_wat, average;
    printf("Enter Apple Number: ");
    scanf("%d", &apple_number);
    printf("Enter Apple Wat: ");
    scanf("%d", &apple_wat);
    average = apple_number * apple_wat / 1000; // 1 kg = 1000 g;

    printf("Apple average is %dkg\n", average);

    return 0;
}
