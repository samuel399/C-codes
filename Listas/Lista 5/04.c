#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int mat[5][8] = {0};
	int menor = 0;
	int linha = 0;
	int coluna = 0;

	srand(time(NULL));

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			mat[i][j] = rand() % 100;
		}
	}

	menor = mat[0][0];

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			if (menor > mat[i][j])
			{
				menor = mat[i][j];
				linha = i;
				coluna = j;
			}
		}
	}

	printf("O menor numero é: %d\n", menor);
	printf("Na posição [%d][%d]\n", linha, coluna);

	return 0;
}