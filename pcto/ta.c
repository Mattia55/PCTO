#include <stdio.h>

int main()
{
    int eta;

    printf("utente inserisci la tua eta: ");
    scanf("%d", &eta);
    if (eta < 18)
    {
        printf("sei minorenne\n");
    }
    else if (eta == 18)
    {
        printf ("sei appena diventato maggiorenne\n");
    }
    else{
        printf("hai più di 18 anni\n");
    }
}



