#include <stdio.h>
#include <math.h>

int main()
{
    int  mean = 0, sum = 0, i, n, sqr_differens_sum = 0, sigma = 0;

    printf("Enter number: ");
    scanf("%d", &n);
    int  numbers[n];

    printf("Enter numbers: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for(i = 0; i < n; i++) {
    sum = sum + numbers[i];
    }

    mean = sum / n;
    printf("Mean: %d\n", mean);

    for(i = 0; i < n; i++) {
        double differens = mean - numbers[i];
        sqr_differens_sum += differens * differens;
    }

    sigma = sqrt(sqr_differens_sum/n);
    printf("Standard Deviation: %d", sigma);

    return 0;
}
