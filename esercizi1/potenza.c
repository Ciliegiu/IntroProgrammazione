#include <stdio.h>

void main()
{
    int x;
    int y;
    int p = 1;
    int el;

    printf("Ciao! Che numero vuoi `POTENZIARE` oggi?!: ");
    scanf("%d", &x);
    printf("Elevato alla?: ");
    scanf("%d", &y);

    el = y;

    while(y > 0)
    {
        p = p * x;
        y = y - 1;
    }
    
    printf("%d^%d = %d\n", x, el, p);
}