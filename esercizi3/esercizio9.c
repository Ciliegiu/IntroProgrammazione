#include <stdio.h>
#include <math.h>

double s_n(unsigned int n, double k)
{
    double a_i;
    double s_i = a_i;
    for(int i = 1; i <= n; i++)
    {
        a_i = (i * (pow(k, i+1)))/(pow(3, i));
        s_i += a_i;
        printf("s_%d = %lf\n", i, s_i);
    }
}

int main()
{
    double k;
    unsigned int n;
    printf("Inserisci il parametro k: ");
    scanf("%lf", &k);
    printf("Dammi il valore di n: ");
    scanf("%ud", &n);
    s_n(n, k);
}