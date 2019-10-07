#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vetor[5] = {0};
	short int c = 1;

	printf("<< Zerando os negativos >>>\n\n");

	for (int i = 0; i < 5; ++i)
	{
		printf("Entre com o valor %d: ", c++);
		scanf("%d", &vetor[i]);

		if (vetor[i] < 0)
		{
			vetor[i] = 0;
		}
	}

	printf("\nZerando os negativos se tem: ");

	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", vetor[i]);
	}
	printf("\n");

	return 0;
}