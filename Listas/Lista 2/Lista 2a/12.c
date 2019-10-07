#include <stdio.h>
#include <stdlib.h>

int main()
{
	int bolinhas[4] = {0};
	float soma = 0;
	float prob[4] = {0};

	printf("<<< PROBABILIDADE >>>\n\n");

	printf("Digite a quantidade de bolinhas: \n");

	for (int i = 0; i < 4; ++i)
	{
		if (i == 0)
		{
			printf("Verde: ");
			scanf("%d", &bolinhas[i]);
		}
		if (i == 1)
		{
			printf("Azul: ");
			scanf("%d", &bolinhas[i]);	
		}
		if (i == 2)
		{
			printf("Amarelo: ");
			scanf("%d", &bolinhas[i]);
		}
		if (i == 3)
		{
			printf("Vermelho: ");
			scanf("%d", &bolinhas[i]);
		}
		soma += bolinhas[i];
	}

	int maior = bolinhas[0];

	for (int i = 0; i < 4; ++i)
	{
		prob[i] = ((bolinhas[i]*100)/soma);

		if (maior < bolinhas[i])
		{
			maior = bolinhas[i];
		}
	}


	printf("\nProbabilidades:\n");

	for (int i = 0; i < 4; ++i)
	{
		if (i == 0)
		{
			if (bolinhas[i] == maior)
			{
				printf("Verde: %.1f << MAIOR PROBABILIDADE\n", prob[i]);
			}
			else
			{
				printf("Verde: %.1f\n", prob[i]);
			}	
		}
		if (i == 1)
		{
			if (bolinhas[i] == maior)
			{
				printf("Azul: %.1f << MAIOR PROBABILIDADE\n", prob[i]);
			}
			else
			{
				printf("Azul: %.1f\n", prob[i]);
			}
		}
		if (i == 2)
		{
			if (bolinhas[i] == maior)
			{
				printf("Amarelo: %.1f << MAIOR PROBABILIDADE\n", prob[i]);
			}
			else
			{
				printf("Amarelo: %.1f\n", prob[i]);
			}
		}
		if (i == 3)
		{
			if (bolinhas[i] == maior)
			{
				printf("Vermelho: %.1f << MAIOR PROBABILIDADE\n", prob[i]);
			}
			else
			{
				printf("Vermelho: %.1f\n", prob[i]);
			}		
		}
	}

	printf("\n");


	return 0;
}