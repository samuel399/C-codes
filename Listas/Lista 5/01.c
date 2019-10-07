#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int mat1[4][4];
	int mat2[4][4];

	srand (time(NULL));

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			//scanf("%d", &mat[i][j]);
			mat1[i][j] = (rand()/(double)RAND_MAX)*50;//duas formas de funcionar
			//printf("%d\n", mat1[i][j]);
			mat2[i][j] = rand() % 50;//duas formas de funcionar
		}
	}	

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			mat1[i][j] += mat2[i][j];
			printf(" %d ", mat1[i][j]);
		}
		printf("\n");
	}


	return 0;
}