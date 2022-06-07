#include <stdio.h>

int main()
{
    int  fish, fish_feed;

    scanf("%d %d", &fish, &fish_feed);
    if(fish <= fish_feed / 3
       ) {
        printf("Have enough fish feed.");
    }
    printf("\n");

    return 0;
}
