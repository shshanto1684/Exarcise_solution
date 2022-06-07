#include <stdio.h>

int main()
{
    int  num, i, sum = 0;

    for(i = 1; i <= 10; i++) {
        scanf("%d", &num);
        if(num >= 60) {
            sum = sum + 1;
        }
    }
   printf("%d", sum);

    return 0;
}
