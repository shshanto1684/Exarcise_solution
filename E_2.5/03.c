#include <stdio.h>

int main()
{
    int  Anondita_date, Anondita_month, Anondita_year, Milehar_date, Milehar_month, Milehar_year, total_date_anondita, total_date_milehar;

    printf("Enter Anondita age of date, month and year: ");
    scanf("%d%d%d", &Anondita_date, &Anondita_month, &Anondita_year);
    printf("Enter Milehar age of date, month and year: ");
    scanf("%d%d%d", &Milehar_date, &Milehar_month, &Milehar_year);
    total_date_anondita = Anondita_date + Anondita_month * 30 + Anondita_year * 365;
    total_date_milehar = Milehar_date + Milehar_month * 30 + Milehar_year * 365;
    if(total_date_anondita > total_date_milehar) {
        printf("Anondita");
    }
    else {
        printf("Milehar");
    }
    printf("\n");

    return 0;
}
