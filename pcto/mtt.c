#include <stdio.h>

int main()
{
    int anno;
    printf("inserisci l'anno: \n");
    scanf("%d", &anno);
    if (anno%400 == 0)
    {
        printf("%d è bisestile\n", anno);
    }
    else if (anno%4 == 0 && anno%100 !=0)
    {
        printf("%d è bisestile\n", anno);
    }
    else
    {
        printf("%d non è bisestile\n", anno);
    }
}