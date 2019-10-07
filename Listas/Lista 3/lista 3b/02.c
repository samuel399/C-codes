#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *numeros;

	numeros = (int *)malloc(5*sizeof(int));

	for (int i = 0; i < 5; ++i)
	{
		printf("Digite o numero %d: ", i+1);
		scanf("%d", &numeros[i]);
	}

	for (int i = 0; i < 5; ++i)
	{
		printf("Numero %d digitado: %d\n", i+1, numeros[i]);
	}
	
	return 0;
}