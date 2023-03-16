#include <stdio.h>

int main()
{
    char stringa[100];

    printf("utente inserisci una stringa: \n");
    scanf(" %s", stringa);
   
    int i = 0;
    while (stringa[i] != '\0')
    {
        i++;
    }
  i--;
  int j = 0;
  char c;
  while (j < i)
  {
   c = stringa[j];
   stringa[j] = stringa[i];
   stringa[i] = c
    i--;
    j++;
  }
  printf("%s\n", stringa);
}