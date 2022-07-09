#include <stdio.h>

int main()

{
    int A[3]={19000, 22350, 26812}, n = 15;
    double p[3] ={0};
    double r = 0.12;


    for(int i=0; i<3; i++) {
        p[i] = A[i]/(1+r*n);
        printf("%.2lf\n", p[i]);
    }

    return 0;
}
