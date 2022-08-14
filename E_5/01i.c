#include <stdio.h>

int strn_length (char str[ ])
{
    int i;

    while (str[i] != '\0') {
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

        for(int j=0; j<=length; j++) {
            if(string_name[j] >= 97 && string_name[j] <= 122) {
                string_name[j] = 'A' + (string_name[j] - 'a');
            }
            else if(string_name[j] >= 65 && string_name[j] <= 97) {
                string_name[j] = 'a' + (string_name[j] - 'A');
            }
        }
        printf("%s\n", string_name);
    }

    return 0;
}
