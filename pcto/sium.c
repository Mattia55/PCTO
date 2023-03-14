//SCRIVERE UN PROGRAMMA CHE CHIEDA ALL'UTENTE DI INSERIRE
//UN INT ETA E DICA SE È MAGGIORENNE O NO

#include <stdio.h>

int main()
{
    int eta;
    printf("Quanti anni hai?");
    scanf("%d", &eta);
    if (eta < 18)
    {
        printf("A %d anni non sei ancora maggiorenne\n", eta);
    }
    else
    {
        printf("Complimenti, a %d anni sei maggiorenne\n", eta);
    }
    return 0;
}
    