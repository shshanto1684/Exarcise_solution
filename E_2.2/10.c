#include <stdio.h>

int main()
{
    int  p1, p2, p3, p4, p5, p6, age_parson = 0;

    scanf("%d%d%d%d%d%d", &p1, &p2, &p3, &p4, &p5, &p6);
    if(p1 >= 30) {
        age_parson = age_parson + 1;
    }
    if(p2 >= 30) {
        age_parson = age_parson + 1;
    }
    if(p3 >= 30) {
        age_parson = age_parson + 1;
    }
    if(p4 >= 30) {
        age_parson = age_parson + 1;
    }
    if(p5 >= 30) {
        age_parson = age_parson + 1;
    }
    if(p6 >= 30) {
        age_parson = age_parson + 1;
    }
    printf("Number of thirty or more age parson is %d", age_parson);
    printf("\n");

    return 0;
}
