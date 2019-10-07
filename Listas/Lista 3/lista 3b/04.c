#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int x;
	int y;

} Pontos;

int main()
{
	int n = 0;

	Pontos *coord;

	printf("Quantos pontos deseja digitar: ");
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		printf("Digite o ponto X %d: ", i+1);
		scanf("%d", &coord[i].x);

		printf("Digite o ponto Y %d: ", i+1);
		scanf("%d", &coord[i].y);
		printf("\n");
	}


	printf("Pontos digitados: ");

	for (int i = 0; i < n; ++i)
	{
		printf("(%d,%d); ", coord[i].x, coord[i].y);
	}

	printf("\n");
	
	return 0;
}