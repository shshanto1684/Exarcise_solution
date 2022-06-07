#include <stdio.h>

int main()
{
    int  family_member_age, someone_can_get_discunt;

    scanf("%d", &family_member_age);
    someone_can_get_discunt = family_member_age < 12 || family_member_age > 72;
    printf("%d %d\n", family_member_age, someone_can_get_discunt);

    return 0;
}
