#include <stdio.h>

int main()
{
    char ch;
    int  n, i, vow = 0, con = 0, sym, num, other;
    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++) {
        scanf("%s", &ch);
        if(ch == 'a') {
                vow = vow + 1;
        }
    }

   printf("Vowel: %d\n Consonant: %d", vow, con);

    return 0;
}
