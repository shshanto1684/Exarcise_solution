#include <stdio.h>

int str_length (char str[ ])
{
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return i;

}

int main()

{
    char str[50];
    int length, i;

    gets(str);

    length = str_length(str);

    for(i = length; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
