#include <stdio.h>

int main()

{
    char string[100];
    int i, alp;

    gets(string);

    i=alp=0;

    while(string[i] != '\0') {
        if((string[i]>='a'&&string[i]<='z') ||
           (string[i]>='A'&&string[i]<='Z')) {
            alp++;
            }
            i++;
        }

    printf("%d\n", alp);

    return 0;
}
