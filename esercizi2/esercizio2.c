//Dati due numeri `n` e `k` da tastiera calcola la sommatoria `S(n, k)`

#include <stdio.h>

int main()
{
    int n, k;
    //chiedo 'n' e 'k' all'utente
    printf("Inserire n: ");
    scanf("%d", &n);
    printf("Inserire k: ");
    scanf("%d", &k);
    //dichiaro una nuova variabile d'appoggio
    int sum = 0; //che terra` conto del risultato delle somme
    //e dichiaro anche una variabile ausiliaria inizializzandola al valore di k
    int tmp = k; //ci aiutera` con la potenza
    
    for(int i = 1; i <= n; i++)
        {
            sum += tmp; //aggiungo 'k^i' alla somma
            tmp = tmp * k; // e calcolo 'k^(i+1)' per l'iterazione successiva
        }
    printf("La sommatoria e`: %d\n", sum);
    return 0;
}