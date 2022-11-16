#include <stdio.h>
/*
Si vuole calcolare il massimo comune divisore (MCD) tra due numeri in input
*/
void main()
{
    int x;
    int y;

    printf("Assegna un valore ad x: ");
    scanf("%d", &x);
    printf("Assegna un valore ad y: ");
    scanf("%d", &y);
    
    while (x != y)
    {
        if (x > y)
        {
            x = (x - y);
        }
        else
        {
            y = (y - x);
        }
    }
    printf("Il MCD tra i numeri indicati è: %d\n", x);
}


