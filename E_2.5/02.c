#include <stdio.h>

int main()
{
    int  ch;

    scanf("%c", &ch);
    if(ch >= 'a' && ch <= 'z') {
       if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel");
       }
       else{
        printf("Consount");
       }
    }
    printf("\n");

    return 0;
}
