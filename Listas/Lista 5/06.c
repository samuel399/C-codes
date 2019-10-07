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
	int mat[TAMANHO][TAMANHO];
	int somalinas[3] = {0};
	int somacolunas[3] = {0};

	srand(time(NULL));

	for (int i = 0; i < TAMANHO; ++i)
	{
		for (int j = 0; j < TAMANHO; ++j)
		{
			mat[i][j] = rand() % 5;
		}
	}

	for (int i = 0; i < TAMANHO; ++i)
	{
			somalinas[0] += mat[0][i];
			somalinas[1] += mat[1][i];
			somalinas[2] += mat[2][i];

			somacolunas[0] += mat[i][0];
			somacolunas[1] += mat[i][1];
			somacolunas[2] += mat[i][2];
	}

	printf("Matriz\n");

	imprimi_matriz(mat);

	for (int i = 0; i < 3; ++i)
	{
		printf("Soma Linha %d: %d\n",i+1, somalinas[i]);
	}

	printf("\n");

	for (int i = 0; i < 3; ++i)
	{
		printf("Soma Coluna %d: %d\n", i+1, somacolunas[i]);
	}

	return 0;
}