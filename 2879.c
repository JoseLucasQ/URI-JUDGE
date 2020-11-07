#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    int vitoria = 0;

    scanf("%i",&x);
    while(x != 0)
    {
        scanf("%i",&y);
        if(y != 1)
        {
            vitoria = vitoria+1;
        }
        x = x-1;
    }
    printf("%i\n", vitoria);
}
