#include <stdio.h>

int main()

{
    char string[100];
    int i, digit;

    gets(string);

    i = digit = 0;

    while(string[i] !='\0') {
        if(string[i]>='0' && string[i]<='9') {
            digit++;
        }

        i++;
    }

    printf("%d\n", digit);

    return 0;
}
