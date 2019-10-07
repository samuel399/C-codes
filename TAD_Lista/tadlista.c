#include <stdio.h>
#include <stdlib.h>
#include "tadlista.h"

typedef struct lista
{
	int qtd;
	int max_inicio;
	int max_final;
	Aluno *dados;		
}Lista;

Lista* criarlista(int tamanho)
{
	Lista *li;

	li = malloc(sizeof(Lista));
	if (li != NULL)
	{
		li->qtd = 0;
	}
	else
		return NULL;

	li->dados = malloc(tamanho * sizeof(Aluno));

	if (li->dados != NULL)
	{
		li->max_inicio = tamanho;
		li->max_final = tamanho;
		return li;
	}
	else
		return NULL;

}

void liberar(Lista *li)
{
 	free(li->dados);
 	free(li);
 	return;  
}

int consulta_elem_pos(Lista *li, int pos, Aluno *al)
{
	if (li == NULL || pos <= 0 || pos > li->qtd)
	{
		return 0;
	}

	*al = li->dados[pos-1];
	return 1;
}

int consulta_elem_matricula(Lista *li, int mat, Aluno *al)
{
	if (li == NULL)
	{
		return 0;
	}

	int i = 0;

	while(i < li->qtd && li->dados[i].matricula != mat)
	{
		i++;
	}

	if (i == li->qtd)
	{
		return 0;
	}

	*al = li->dados[i];

	return 1;
}

int insere_lista_final(Lista *li, Aluno al)
{
	if (li == NULL)
	{
		return 0;
	}

	if (li->qtd == li->max_final)
	{
		li->max_final += li->max_inicio;

		li->dados = realloc(li->dados, li->max_final*sizeof(Aluno));

		if (li->dados == NULL)
		{
			return 0;
		}
	}

	li->dados[li->qtd] = al;
	li->qtd++;

	return 1;
}

int insere_lista_inicio(Lista *li, Aluno al)
{
	if (li == NULL)
	{
		return 0;
	}

	if (li->qtd == li->max_final)
	{
		li->max_final += li->max_inicio;

		li->dados = realloc(li->dados, li->max_final*sizeof(Aluno));

		if (li->dados == NULL)
		{
			return 0;
		}
	}

	for (int i = li->qtd-1; i >= 0; --i)
	{
		li->dados[i+1] = li->dados[i];
	}
	
	li->dados[0] = al;
	li->qtd++;

	return 1;
}

int insere_lista_ordenada(Lista *li, Aluno al)
{
	if (li == NULL)
	{
		return 0;
	}

	if (li->qtd == li->max_final)
	{
		li->max_final += li->max_inicio;

		li->dados = realloc(li->dados, li->max_final*sizeof(Aluno));

		if (li->dados == NULL)
		{
			return 0;
		}
	}

	int i;

	for (i = 0; i < li->qtd && al.matricula > li->dados[i].matricula; ++i);

	for (int j = li->qtd-1; j >= i; --j)
	{
		li->dados[j+1] = li->dados[j];
	}

	li->dados[i] = al;
	li->qtd++;

	return 1;
}

int remove_lista(Lista *li, int mat)
{
	if (li == NULL || li->qtd == 0)
	{
		return 0;
	}

	int i;

	for (i = 0; i < li->qtd && li->dados[i].matricula != mat; ++i);

	if (i == li->qtd)
	{
		return 0;
	}

	for (int j = i; j < li->qtd-1; ++j)
	{
		li->dados[j] = li->dados[j+1];
	}

	li->qtd--;

	return 1;
}

int remove_lista_otimizado(Lista *li, int mat)
{
	if (li == NULL || li->qtd == 0)
	{
		return 0;
	}

	int i;

	for (i = 0; i < li->qtd && li->dados[i].matricula != mat; ++i);

	if (i == li->qtd)
	{
		return 0;
	}

	li->qtd--;

	li->dados[i] = li->dados[li->qtd];

	return 1;
}

int remove_lista_inicio(Lista *li)
{
	if (li == NULL || li->qtd == 0)
	{
		return 0;
	}

	for (int i = 0; i < li->qtd-1; ++i)
	{
		li->dados[i] = li->dados[i+1];
	}

	li->qtd--;

	return 1;
}

int remove_lista_final(Lista *li)
{
	if (li == NULL || li->qtd == 0)
	{
		return 0;
	}
	li->qtd--;

	return 1;
}

int tamanho_lista(Lista *li)
{
	if (li == NULL)
	{
		return 0;
	}
	else
	{
		return li->qtd;
	}
}

int lista_vazia(Lista *li)
{
	if (li == NULL)
	{
		return 0;
	}

	return (li->qtd == 0);
}

void imprime_lista(Lista *li)
{
	if (li == NULL)
	{
		return;
	}

	for (int i = 0; i < li->qtd; ++i)
	{
		printf("Matricula: %d\n", li->dados[i].matricula);
		printf("Nome: %s\n", li->dados[i].nome);
		printf("Notas: %f %f %f\n", li->dados[i].n1, li->dados[i].n2, li->dados[i].n3);

		puts("--------------------------------------------------------------------\n");
	}

	return;
}

int compacta(Lista *li)
{
	if (li == NULL || li->qtd == 0)
	{
		return 0;
	}

	li->max_final = li->qtd;

	while((li->max_final % li->max_inicio) != 0)
	{
		li->max_final++;
	}

	li->dados = realloc(li->dados, li->max_final*sizeof(Aluno));
}
