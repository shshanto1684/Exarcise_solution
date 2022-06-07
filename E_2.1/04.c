#include <stdio.h>

int main()
{
    int  france_goal, spain_goal, rain_came, france_can_go_next_round;

    scanf("%d %d %d", &france_goal, &spain_goal, &rain_came);

    france_can_go_next_round = (france_goal > spain_goal ||! spain_goal > france_goal)  && ! rain_came;
    printf("%d %d %d => %d\n", france_goal, spain_goal, rain_came, france_can_go_next_round);

    return 0;
}
