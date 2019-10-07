#include <stdio.h>
#include <stdlib.h>
#include "tadlista.h"

int main()
{
	Lista *lista_alunos;
	int numalunos;

	Aluno a[4] = {	{2, "Andre", 9.5, 7.8, 8.5},
					{4, "Ricardo", 7.5, 8.7, 6.8},
					{1, "Bianca", 9.7, 6.7, 8.4},
					{3, "Ana", 5.7, 6.7, 7.4}	};

	printf("Digite o Numero maximo de alunos inicial: ");
	scanf("%d", &numalunos);
	printf("\n");

	lista_alunos = criarlista(numalunos);

	if (lista_alunos == NULL)
	{
		puts("ERROR!!!!");
	}

	for (int i = 0; i < 4; ++i)
	{
		insere_lista_ordenada(lista_alunos, a[i]);
	}

	imprime_lista(lista_alunos);

	printf("\n\n\n");

	for (int i = 0; i < 5; ++i)
	{
		if (!remove_lista_otimizado(lista_alunos,i))
		{
			printf("ERROR!!\n");
		}

		imprime_lista(lista_alunos);
		printf("\n\n\n");
	}


	liberar(lista_alunos);
		
	return 0;
}			