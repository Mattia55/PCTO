#include <stdio.h>
int main()
{
    int anno2;
    int anno = 1969;
    printf("In che anno sei nato?");
    scanf("%d", &anno2);
    if (anno2 == anno)
    {
        printf("Sei nato nel %d, anno dello sbarco sulla luna", anno);
    }
    else if (anno2 > anno)
    {
        printf("Sei nato %d anni dopo lo sbarco sulla luna", anno2 - anno);
    }
    else
    {
        printf("Sei nato %d anni prima dello sbarco sulla luna", anno - anno2);
    }
}