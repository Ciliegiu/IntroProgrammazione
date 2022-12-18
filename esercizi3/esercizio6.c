#include <stdio.h>

double a_n(int n)
{
    double a_i = 0.5;
    printf("a_1 = %lf\n", a_i);
    for(int i = 2; i <= n; i++)
    {
        a_i = (a_i +1)/2;
        printf("a_%d = %lf\n", i, a_i);
    }
    return a_i;
}

int main()
{
    int i;
    printf("Inserisci un indice per il calcolo: ");
    scanf("%d", &i);
    a_n(i);
    return (0);
}