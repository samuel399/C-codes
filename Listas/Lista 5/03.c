#include <stdio.h>
#include <stdlib.h>

void imprimi_matriz(int matriz[5][3], int l, int c)
{
	printf("\n");
	for (int i = 0; i < l; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			printf(" %d ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return;
}



int main(void)
{
	int mat1[3][4] = {0};
	int mat2[4][5] = {0};
	int mult[5][3] = {0};
	int soma = 0;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			mat1[i][j] = 1; 
			//rand() % 10;
		}
	}
	
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			mat2[i][j] = 1;
			//rand() % 10;
		}
	}	

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			soma += mat1[i][j]*mat2[j][i];
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			mult[i][j] = soma;
		}
	}

			

	printf("Matriz Resultante:\n");
	imprimi_matriz(mult, 5, 3);

	return 0;
}
