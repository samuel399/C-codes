#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned char a = 28;

	printf("\n Tabela ASCII \n\n");

	for (int i = 28; i < 256; ++i)
	{
		printf("Caracter: %c 	Valor Decimal: %d\n", a, a);
		a++;
	}

	return 0;
}