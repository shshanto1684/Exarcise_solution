#include <stdio.h>

int main()
{
    char  ch;

    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("This character is capital letter.");
    }
    else if(ch >= 'a' && ch <= 'z') {
        printf("This character is small letter.");
    }
    else if(ch >= '0' && ch <= '9') {
        printf("This character is number.");
    }
    else {
        printf("This character is symbol.");
    }
    printf("\n");

    return 0;
}
