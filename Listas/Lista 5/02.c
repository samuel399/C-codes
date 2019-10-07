#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 3


void imprimi_matriz(int matriz[TAMANHO][TAMANHO])
{
	printf("\n");
	for (int i = 0; i < TAMANHO; ++i)
	{
		for (int j = 0; j < TAMANHO; ++j)
		{
			printf(" %d ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return;
}



int main(void)
{
	int mat1[TAMANHO][TAMANHO];
	int mat2[TAMANHO][TAMANHO];
	int mult[TAMANHO][TAMANHO];
	int soma = 0;

	srand(time(NULL));

	for (int i = 0; i < TAMANHO; ++i)
	{
		for (int j = 0; j < TAMANHO; ++j)
		{
			mat1[i][j] = rand() % 10;
			mat2[i][j] = rand() % 10;
		}
	}
//imprimir tab 1

	imprimi_matriz(mat1);

//imprimir tab 2
	
	imprimi_matriz(mat2);

	printf("\n");

	for (int i = 0; i < TAMANHO; ++i)
	{
		for (int j = 0; j < TAMANHO; ++j)
		{
			for(int k = 0; k < TAMANHO; ++k)
			{
				soma += mat1[0][j]*mat2[j][i];
			}		
			mult[i][j] = soma;
			soma = 0;
		}	
	}

//imprimir mult

	imprimi_matriz(mult);

	return 0;
}