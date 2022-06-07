#include <stdio.h>

int main()
{
    int  total_seat_number, current_rider;

    scanf("%d %d", &total_seat_number, &current_rider);
    if((total_seat_number - current_rider) >= 5) {
        printf("Have enough seat.");
    }
    printf("\n");

    return 0;
}
