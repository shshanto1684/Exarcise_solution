#include <stdio.h>

int main()

{
    char a[30]={"Bangla"}, b[30]={"desh"};
    int i, j, length = 6;

    for(i=0, j=0; j !='\0'; j++, i++) {
        if(a[i] == b[j]) {
            printf("Y");
        }
        else {
            printf("N");
        }
    }

    return 0;
}
