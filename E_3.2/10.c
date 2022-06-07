#include <stdio.h>

int main()
{
    int  num, sum = 0;
    scanf("%d", &num);

    while(num > 0) {
        if(num % 2 == 0) {
            num = num / 2;
            num++;
        }
        else {
            num = num * 3 + 1;
            num++;
        }
       // printf("%d ", num);
        sum = sum + 1;
    }
    printf("This operation run %d\n", sum);

    return 0;
}
