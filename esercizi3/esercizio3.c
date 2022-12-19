#include <stdio.h>
/*
Mia funzione per valore assoluto.. manca di copertura caso x = 0...
double v_ass(double x)
{
    if(x < 0)
        x = x * -1;
    return (x);
}
*/

double valore_assoluto(double a)
{
    double abs;//variabile di appoggio
    if(a >= 0)
    {
        abs = a;
    }
    else
    {
        abs = -a;
    }
    return (abs);
}

/*
int ass_diff(double e, double x, double y)
{
    double diff = x - y;
    diff = v_ass(diff);
    if(diff < e)
        printf("I due numeri sono uguali con epsilon: %lf\n", e);
    else
        printf("I due numeri sono diversi con epsilon: %lf\n", e);
    return (0);
}
*/

int uguali(double a, double b, double epsilon)
{
    double diff = valore_assoluto(a - b);
    if(diff < epsilon)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

/*
int main()
{
    double e, x, y;
    printf("Inserisci epsilon (e): ");
    scanf("%lf", &e);
    printf("Inserisci x: ");
    scanf("%lf", &x);
    printf("Inserisci y: ");
    scanf("%lf", &y);
    int ass = ass_diff(e, x, y);
    return (0);
}
*/

int main()
{
    double x, y, e;
    printf("Inserisci epsilon (e): ");
    scanf("%lf", &e);
    printf("Inserisci x: ");
    scanf("%lf", &x);
    printf("Inserisci y: ");
    scanf("%lf", &y);
    int c = uguali(x, y, e);
    if(c == 1)
    {
        printf("I due numeri sono uguali con epsilon: %lf\n", e);
    }
    else
    {
        printf("I due numeri sono diversi con epsilon: %lf\n", e);
    }
}