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

   while(NULL != gets(string_name)){
        length = strn_length(string_name);
        //printf("%d\n", length);

    for (int j= 0; j<length; j++) {
        if(string_name[j] >= 65 && string_name[j] <= 90) {
            string_name[j] = 'a' + (string_name[j] - 'A');
            }
        }
        printf("%s\n", string_name);
    }

    return 0;
}
