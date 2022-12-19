#include <stdio.h>

int test_primo(int n)
{
    //divido n per i numeri da 2 alla sua meta` per verificare se ha divisori
    for(int i = 2; i <= n/2; i++)
    {
        //se il resto della divisione tra n e i e` 0 => i e` divisore di n
        if(n % i == 0)
        {
            return (0);//FALSO
        }
    }
    return (1);//VERO -> se esco dal ciclo nessun numero era divisore di n => n e` pari
}

//chiamata della funzione per testare se il numero in input e` primo
int main()
{
    int n;
    printf("Inserisci n: ");
    scanf("%d", &n);
    int primo = test_primo(n);
    if(primo == 1)
    {
        printf("%d e`primo...\n", n);
    }
    else
    {
        printf("%d non e` un numero primo...\n", n);
    }
    
    int primi = 0;//contatore
    for(int i = 1; i <= n; i++)
    {
        if(test_primo(i) == 1)
        {
            primi++;
        }
    }
    printf("... anche se non ti interessa, tra 1 e %d ci sono %d numeri primi!!\n", n, primi);
}
