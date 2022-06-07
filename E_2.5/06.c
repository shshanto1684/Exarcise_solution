#include <stdio.h>

int main()
{
    int  school_name, shift;

    printf("Enter student school name polasdanga or nonerngangole and enter shift morning or afternoons: ");
    scanf("%s%s", &school_name, &shift);

    if(school_name == 'p') {
            if(shift == 'm') {
                printf("Base is yellow");
            }
            else if(shift == 'e') {
                printf("Base is green");
            }
    }
    if(school_name == 'n') {
        if(shift == 'm') {
            printf("Base is blue");
        }
        else if(shift == 'e') {
            printf("Base is red");
        }
    }
    printf("\n");

    return 0;
}
