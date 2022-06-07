#include <stdio.h>

int main()
{
    int num, i;//n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    int sum = 0;
    //scanf("%d%d%d%d%d%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10) ;
    //sum = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10;
    for(i = 0; i < 10; i++) {
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("%d", sum);
    printf("\n");

    return 0;
}
