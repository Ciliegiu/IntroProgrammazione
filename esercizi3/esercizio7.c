#include <stdio.h>
#include <math.h>

double a_n(int n, double p)
{
    double a_i = p;
    printf("a_1 = %lf\n", a_i);
    for(int i = 2; i <= n; i++)
    {
        a_i = 0.5 * (a_i + (p/a_i));
        printf("a_%d = %lf\n", i, a_i);
    }
    return (a_i);
}

int main()
{
    int n;
    double p;
    printf("Dammi n: ");
    scanf("%d", &n);
    printf("Dammi p: ");
    scanf("%lf", &p);
    a_n(n, p);
    return (0);
}