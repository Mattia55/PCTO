#include <stdio.h>
int main()
{
    int n;

    printf("utente inserisci un numero: ");
    scanf("%d", &n);

    int array[n];
    int i = 0;
    int primo = 2;
    int divisore = 2;
    while (i < 2)
    {
        while (primo % divisore != 0 && divisore < primo)
        divisore++;
        if (divisore == primo)
        {
            array[i] = primo;
            i++;
        }
        divisore = 2;
        primo++;
    }
    
    i = 0;
    while (i < n)
    {
        printf("%d\n", array[i]);
        i++;
    }
}