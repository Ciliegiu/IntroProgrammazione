#include <stdio.h>
#include <math.h>

double distanza(double x1, double y1, double x2, double y2)
{
    double diff1, diff2, sum; //variabili di appoggio per i calcoli
    diff1 = x1 - x2;
    diff2 = y1- y2;
    diff1 = diff1 * diff1;
    diff2 = diff2 * diff2;
    sum = diff1 + diff2;
    double distanza = sqrt(sum);
    return  distanza;
}

int main()
{
    double x1, y1, x2, y2;
    printf("Inserisci l'ascissa di P1: ");
    scanf("%lf", &x1);
    printf("Inserisci l'ordinata di P1: ");
    scanf("%lf", &y1);
    printf("Inserisci l'ascissa di P2: ");
    scanf("%lf", &x2);
    printf("Inserisci l'ordinata di P2: ");
    scanf("%lf", &y2);
    double dist = distanza(x1, y1, x2, y2);
    printf("La distanza tra P1 e P2 e`: %lf\n", dist);
    return 0;
}