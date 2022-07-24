#include <stdio.h>
#include <math.h>

int main()

{
    int points[5][2];

    for(int i=0; i<5; i++) {
        scanf("%d%d", &points[i][0], &points[i][1]);
    }

    double distance, min_distance = 1e20;

    for(int i=0; i<4; i++) {
        for(int j=i+1; j<5; j++) {
            double x = pow(points[i][0] - points[j][0], 2);
            double y = pow(points[i][1] - points[j][1], 2);
            distance = sqrt(x+y);

            if(distance < min_distance) {
                min_distance = distance;
            }
        }
        printf("%g\n", min_distance);
    }


    return 0;
}
