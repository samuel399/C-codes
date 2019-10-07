#include <stdio.h>
#include <stdlib.h>

int main()
{

	int vetor[8] = {0};
	int repetidos[8] = {0};
	int vezes[8] = {0};
	int cont = 0;
	short int count = 1;

	printf("\n<<< Valores iguais >>>\n\n");

	for (int i = 0; i < 8; ++i)
	{
		printf("Entre com o numero %d: ", count++);
		scanf("%d", &vetor[i]);
	}


	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			if ((vetor[i] == vetor[j]) && (i != j) && (repetidos[i] != -1))
			{
				repetidos[i]++;
				repetidos[j]--;
				cont++;
			}
			vezes[i] = cont;
		}
		cont = 0;
	}

	printf("\nValores repetidos: \n");

	for (int i = 0; i < 8; ++i)
	{
		vezes[i]++;
		if (repetidos[i] > 0)
		{
			printf("O valor %d aparece %d vezes\n",vetor[i], vezes[i]);
		}
	}

	return 0;
}