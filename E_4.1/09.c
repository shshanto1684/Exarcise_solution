#include <stdio.h>

int main()
{
    int  n, i, median1, median2, median;

    printf("Enter number: ");
    scanf("%d", &n);

   int numbers[n];

    //user input
    for(i = 1; i <= n; i++) {
        scanf("%d", &numbers[i]);
    }

    //smallest to biggest
    for(int j = n; j >= 1; j--) {
        for(i = 1; i < j; i++) {
            if(numbers[i]>numbers[i+1]) {
                int temp = numbers[i];
                numbers[i] = numbers[i+1];
                numbers[i+1] = temp;
            }
        }
    }

    printf("smallest to biggest: ");

    for(i = 1; i <= n; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    //median
    if(n%2==0) {
            median1 = (n/2);
            median2 = (n/2) + 1;
            median = (numbers[median1] + numbers[median2]) /2;
            printf("Median: %d\n", median);
    }
    else {
            median = (n+ 1) /2;
            printf("Median: %d\n", numbers[median]);
    }


    return 0;
}
