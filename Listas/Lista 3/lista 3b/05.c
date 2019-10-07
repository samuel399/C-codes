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

	Pontos *coord = NULL;
	Pontos *maior = NULL;
	Pontos *menor = NULL;
	Pontos *esquerda = NULL;
	Pontos *direita = NULL;

	printf("Quantos pontos deseja digitar: ");
	scanf("%d", &n);

	coord = (Pontos *)malloc(n * sizeof(Pontos));

	for (int i = 0; i < n; ++i)
	{
		printf("Digite o ponto X %d: ", i+1);
		scanf("%d", &coord[i].x);

		printf("Digite o ponto Y %d: ", i+1);
		scanf("%d", &coord[i].y);
		printf("\n");
	}

	esquerda = coord;
	direita = coord;
	maior = coord;
	menor = coord;

	for (int i = 0; i < n; i++)
	{
		if (coord[i].x < esquerda->x)
		{
			esquerda = &coord[i].x;
		}
		if (coord[i].x > direita->x)
		{
			direita = &coord[i].x;
		}
		if (coord[i].y < menor->y)
		{
			menor = &coord[i].y;
		}
		if (coord[i].y > maior->y )
		{
			maior = &coord[i].y;	
		}
	}

	printf("Pontos digitados: ");

	for (int i = 0; i < n; ++i)
	{
		printf("(%d,%d); ", coord[i].x, coord[i].y);
	}

	printf("\n");

	printf("O ponto mais a esquerda é: %d\n", esquerda->x);
	printf("O ponto mais a direita é: %d\n", direita->x);
	printf("O ponto mais a acima é: %d\n", maior->y);
	printf("O ponto mais a baixo é: %d\n", menor->y);

	printf("\n");
	
	free(coord);
	return 0;
}
