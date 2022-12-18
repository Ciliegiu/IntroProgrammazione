#include <stdio.h>

int minimo_tra_tre(int a, int b, int c)
{
    //variabile temporanea per il minimo
    int min;
    //confronto a e b e assegno il minore a min
    if (a <= b)
    {
        min = a;
    }
    else
    {
        min = b;
    }
    //ora confronto min con c
    if (min > c)
    {
        min = c;
    }
    //resstituisco il minimo tra i tre all'utente
    return min;
}

//scrivo la funzione test che opera su x, y inseriti dall'utente e un w che varia tra 1 e il max tra x ed y
void test(int a, int b)
{
    //la prima cosa da fare e` individuare il max tra i due
    //vairabile temporanea per il max
    int max;
    //trovo il massimo tra a e b e lo assegno a max
    if (a >= b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    //scrivo un ciclo for per i che va da 1 a max{a, b}
    for (int i = 1; i <= max; i++)
    {
        printf("tripletta(%d, %d, %d) - minimo -> %d\n", a, b, i, minimo_tra_tre(a, b, i));
    }

}

void main()
{
    //variabili dove leggere gli input
    int x, y;
    printf("Inserisci il valore di (x): \n");
    scanf("%d", &x);
    printf("Inserisci il valore di (y): \n");
    scanf("%d", &y);
    //testo la funzione
    test(x, y);
    return(0);
}
