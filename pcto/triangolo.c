#include <stdio.h>
int main()
{
    int lato1, lato2, lato3;
    printf("Inserisci di seguito le tre misure: \n");
    scanf("%d%d%d", &lato1,&lato2,&lato3);
    if (lato1+lato2 > lato3)
    {
        if (lato2+lato3 > lato1)
        {
            if (lato3+lato1 > lato2)
            {
                printf("%d, %d, %d sono lati di un triangolo", lato1, lato2, lato3);
            }
            else
            {
                printf("%d, %d, %d non sono lati di un triangolo", lato1, lato2, lato3);
            }
        }
        else 
        {
            printf("%d, %d, %d non sono lati di un triangolo", lato1, lato2, lato3);
        }
    }
    else
    {
        printf("%d, %d, %d non sono lati di un triangolo", lato1, lato2, lato3);
    }
}