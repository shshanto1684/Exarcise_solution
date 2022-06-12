#include <stdio.h>
#include <math.h>

int main()
{
    int  p[3] ={10000, 12000, 15000}, r[3] ={6/100, 5.75/100, 5.25/100}, n = 15, c[3] ={0};

    for(int i=0; i<3; i++) {
        c[i] = p[i] * ((1+r[i]), n);
        printf("%d\n", c[i]);
    }

    return 0;
}
