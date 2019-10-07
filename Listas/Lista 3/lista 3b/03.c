#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numeros = 0;
	int *ponteiro;

	printf("Digite quantos numeros vao ser inseridos: ");
	scanf("%d", &numeros);

	ponteiro = (int *)malloc(numeros * sizeof(int));

	for (int i = 0; i < numeros; ++i)
	{
		printf("Digite o numero %d: ", i+1);
		scanf("%d", &ponteiro[i]);
	}

	printf("Pares:\n");
	for (int i = 0; i < numeros; ++i)
	{
		if (ponteiro[i]%2 == 0)
		{
			printf("%d\n", ponteiro[i]);
		}
	}

	printf("Impares:\n");
	for (int i = 0; i < numeros; ++i)
	{
		if (ponteiro[i]%2 != 0)
		{
			printf("%d\n", ponteiro[i]);
		}
	}

	return 0;
}