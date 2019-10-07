#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(void)
{
	int mat[5][5];
	int soma = 0;

	srand(time(NULL));

	for (int i = 0; i < TAM; ++i)
	{
		for (int j = 0; j < TAM; ++j)
		{
			mat[i][j] = rand() % 10;
			

			if (i == j)
			{
				soma += mat[i][j];
			}
		}
	}

	printf("As somas das diagonais é: %d\n", soma);


	return 0;
}