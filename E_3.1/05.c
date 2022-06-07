/*#include <stdio.h>

int main()
{
    char n;
    int total = 0;

    for( ; scanf("%c", &n) && n !='\n'; ) {
        total += n - '0';
    }
    printf("%d", total);
    printf("\n");

    return 0;
}*/
#include <stdio.h>

int main()
{
    int  num, sum = 0, reminder;

    scanf("%d", &num);
    while(num > 0) {
        reminder = num % 10;
        sum = sum + reminder;
        num = num / 10;
    }
    printf("%d", sum);
    printf("\n");

    return 0;
}
