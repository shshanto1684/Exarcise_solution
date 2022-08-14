#include <stdio.h>

int main()

{
    int a, length, i;
    scanf("%d\n", &a);

    char str1[i], str2[i], str3[i], str4[i];
    char new_str[50];

    gets(str1);
    gets(str2);
    gets(str3);
    gets(str4);

    length = a;

    for(int i=0; i<length; i++) {
        new_str[2*i] = str1[i], str2[i], str3[i], str4[i];
        new_str[2*i+1] = str1[i+1], str2[i+1], str3[i+1], str4[i+1];
        new_str[2*i+2] = str1[i+2], str2[i+2], str3[i+2], str4[i+2];
        new_str[2*i+3] = str1[i+3], str2[i+3], str3[i+3], str4[i+3];
    }
    new_str[2*i] = '\0';

    printf("%s\n", new_str);

    return 0;
}
