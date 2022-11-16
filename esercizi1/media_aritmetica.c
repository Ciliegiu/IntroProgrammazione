#include <stdio.h>
/*
void main()
{
    int x;
    float somma = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Inserisci il numero (x_%d): ", i);
        scanf("%d", &x);
        somma = somma + x;
    }
    printf("La media è: %f\n", somma / 3);
}
*/

void main()
{
    int x = -1;
    float somma = 0;
    int n = 0;

    while(x != 0)
    {
        printf("Inserire il valore di x: ");
        scanf("%d", &x);
        somma = somma + x;
        if (x != 0)
            n = n + 1;
    }
    printf("La media è: %f\n", somma / n);
}