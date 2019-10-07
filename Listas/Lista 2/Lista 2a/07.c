#include <stdio.h>
#include <stdlib.h>

// achar a maior, dividir todas pela maior, depois multiplicar por 100


int main()
{
	float notas[5] = {0};
	int cont = 1;
	double conta = 0;

	for (int i = 0; i < 5; ++i)// ler notas
	{
		printf("Entre com a nota do aluno %d: ", cont++);
		scanf("%d",&notas[i]);
	}

	float maior = notas[0];

	for (int i = 0; i < 5; ++i)//pegar a maior
	{
		if (maior < notas[i])
		{
			maior = notas[i];
		}
	}

	for (int i = 0; i < 5; ++i)
	{
		conta = (notas[i] / maior);
		notas[i] = (100 * conta);
	}

	printf("\n Notas normalizadas \n\n");

	cont = 1;

	for (int i = 0; i < 5; ++i)
	{
		printf("A nota do aluno %d é: %.1f\n", cont++, notas[i]);
	}


	return 0;
}