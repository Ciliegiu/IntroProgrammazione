#include <stdio.h>
#include <math.h>

int convert_2_10(long int n)//convertitore da numero binario a decimale
{
    int dec = 0;//inizializzo la var dove memorizzare il numero decimale nelle varie fasi
    int r;//resto
    int i = 0;//iterazione

    while(n != 0)
    {
        r = n % 10;//resto della divisione per 10
        n /= 10;//quoziente
        dec += r * pow(2, i);//aggiornamento risultato
        i++;
    }
    return (dec);//alla fine del while il nmero in input e` stato convertito in base decimale
}

int main()
{
    long int n;
    printf("Inserire il numero binario: ");
    scanf("%ld", &n);//leggo il binario da tastiera
    int dec = convert_2_10(n);//converto in base 10
    printf("L'equivalente in base 10 e`: %d\n", dec);//stampo il risultato
    return (0);
}