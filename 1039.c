#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	 int raiz1, raiz2, x1, x2, y1, y2;
    while (scanf("%d%d%d%d%d%d", &raiz1, &x1, &y1, &raiz2, &x2, &y2) != EOF)
	{
		x1 = x2 - x1;
		y1 = y2 - y1;
		x1 *= x1;
		y1 *= y1;

		if( sqrt(x1 + y1) + raiz2 <= raiz1)
		{
			printf("RICO\n");
		} else
		{
			printf("MORTO\n");
		}
	}
}
