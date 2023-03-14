

#include <stdio.h>

int main()
{
    char sesso;
printf("inserisci il tuo sesso: \n(M) maschio\n(F) femmina\n(N) non specificato");
scanf("%c", &sesso);
if (sesso == 'm' || sesso == 'M')
{
    printf("sei un maschio\n");
}
else if (sesso == 'f' || sesso == 'F')
{
    printf("sei una femmina\n");
}
else if (sesso == 'n' || sesso == 'N')
{
    printf("non specificato\n");
}
else
{
    printf("messaggio di errore\n");
}
}
