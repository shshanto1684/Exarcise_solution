#include <stdio.h>

int main()
{
    double  p = 10000, n = 3, r = 0.035, Jonone_Bank_A, Urme_Bank_A;

    scanf("");
    Jonone_Bank_A = p * n * 2 * r ;
    Urme_Bank_A = p * n * 3 * r;
    //printf("%.2lf\n%.2lf\n", Jonone_Bank_A, Urme_Bank_A);

    if(Jonone_Bank_A < Urme_Bank_A) {
        printf("Benefited");
    }
    else {
        printf("Lose");
    }
    printf("\n");
    return 0;
}
