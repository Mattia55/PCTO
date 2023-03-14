//SCRIVERE UN PROGRAMMA CHE CHIEDA ALL'UTENTE DI INSERIRE
//UN INT ETA E STAMPARE A SCHERMO IL VALORE

#include <stdio.h>

int main()
{
    int eta;

    char sesso;

    printf("inserisci la tua eta: ");
    scanf("%d", &eta);
    printf("Hai %d anni\n", eta);
    printf("Inserisci il tuo sesso:\n M (maschio) / F (femmina) / N (preferisco non specificare: ");
    scanf("%s", &sesso);
    printf("Hai %d anni\n e hai inserito %c\n", eta, sesso);
    return 0;
    
}