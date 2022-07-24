#include <stdio.h>


int strn_length (char str[ ])
{
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}

int main()

{
    char string_name[100];
    int length;

    while(NULL != gets(string_name)) {
        length = strn_length(string_name);
        printf("Length is: %d\n", length);
    }
    return 0;
}
