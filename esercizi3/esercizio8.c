#include <stdio.h>

double s_n(int n)
{
    double s_k;
    double s_k_tot;
    for(int k = 0; k <= n; k++)
    {
        s_k = (2 * k) + 1;
        s_k = s_k * s_k;
        s_k = 1 / s_k;
        s_k_tot += s_k;
        printf("s_%d = %lf\n", k, s_k_tot);
    }
    return (s_k_tot);
}

int main()
{
    int n;
    printf("Dammi n: ");
    scanf("%d", &n);
    s_n(n);
    return (0);
}