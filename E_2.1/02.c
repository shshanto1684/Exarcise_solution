#include <stdio.h>

int main()
{
    int  school_open, comption_have, get_up_early;

    scanf("%d %d", &school_open, &comption_have);
    get_up_early = school_open || comption_have;
    printf("%d %d => %d\n", school_open, comption_have, get_up_early);

    return 0;
}
