#include <stdio.h>
#include <stdlib.h>
#include "tadencad.h"

#define SUCCESS 0
#define OUT_OF_MEMORY NULL
#define ELEM_NOT_FOUND -2
#define ERROR -1

typedef struct lista_no Lista_no;

typedef struct lista
{
	Lista_no *head;

	int qtd;

	int ordenada;

}Lista;

struct lista_no 
{
	Aluno dado;
	Lista_no *prox;

};


Lista* criar_lista()
{
	Lista *li;

	li = malloc(sizeof(Lista));

	if (li != NULL)
	{
		li->head = NULL;
		li->qtd = 0;
		li->ordenada = 1;
		return li;
	}
	else 
		return OUT_OF_MEMORY;

}

int tamanho_lista(Lista *li)
{
	if (li == NULL)
	{	
		return ERROR;
	}

	return li->qtd;

}

int consulta_lista_pos(Lista *li, int pos, Aluno *al)
{
	if (li == NULL)
	{
		return ERROR;
	}

	if (pos > li->qtd)
	{
		return ELEM_NOT_FOUND;
	}

	Lista_no *p;

	p = li->head;

	for (int i = 0; i < pos; ++i)
	{
		p = p->prox;
	}

	*al = p->dado;

	return SUCCESS;
}

int consulta_lista_mat(Lista *li, int mat, Aluno *al)
{
	if (li == NULL)
	{
		return ERROR;
	}

	Lista_no *p;

	for (p = li->head; p->dado.matricula != mat; p = p->prox);
	{
		if (p == NULL)
		{
			return ELEM_NOT_FOUND;
		}

	}

	*al = p->dado;

	return SUCCESS;


}

int insere_lista_inicio(Lista *li, Aluno al)
{
	if (li == NULL)
	{
		return ERROR;
	}

	Lista_no *p;

	p = malloc(sizeof(Lista_no));

	if (p != NULL)
	{
		p->dado = al;

		p->prox = li->head;

		li->head = p;

		li->qtd++;

		return SUCCESS;

	}

	else
		return ERROR;

}

int insere_lista_final(Lista *li, Aluno al)
{

	if (li == NULL)
	{
		return ERROR;
	}

	Lista_no *p;

	Lista_no *q;

	p = malloc(sizeof(Lista_no));

	if (p != NULL)
	{
		p->dado = al;

		p->prox = NULL;

		if (li->head == NULL)
		{
			li->head = p;

			li->qtd++;

			return SUCCESS;
		}
		else
		{
			for (q = li->head; q->prox !=NULL; q = q->prox);

			q->prox = p;

			li->qtd++;

			return SUCCESS;
		}
	}
	else
		return ERROR;

}

int insere_lista_pos(Lista *li, int pos, Aluno al)
{
	if (li == NULL)
	{
		return ERROR;
	}

	Lista_no *p;

	Lista_no *q;

	Lista_no *r;

	if (pos >= li->qtd)
	{
		insere_lista_final(li, al);
	}
	else if (li->head == NULL)
	{
		p = malloc(sizeof(Lista_no));

		p->dado = al;

		p->prox = NULL;

		li->head = p;

		li->qtd++;

		return SUCCESS;
	}
	else if(pos == 1)
	{
		p->dado = al;

		p->prox = NULL;

		li->head->prox = p;

		li->qtd++;

		return SUCCESS;
	}
	else
	{
		p->dado = al;

		q = li->head;

		r = q->prox;

		for (int i = 0; i < pos; ++i)
		{
			q = q->prox;
			r = r->prox;	
		}

		p->prox = r;

		q->prox = p;

		li->qtd++;

		return SUCCESS;

	}
}

int insere_lista_ordenado(Lista *li, Aluno al)
{
	if (li == NULL)
	{
		return ERROR;
	}

	Lista_no *p;

	Lista_no *q;

	Lista_no *r;

	for (p = li->head; p != NULL && p->dado.matricula > al.matricula; p = p->prox)
	{
		q = p;
	}
	r = malloc(sizeof(Lista_no));

	if (r == NULL)
	{
		return ERROR;
	}

	if (q == NULL)
	{
		li->head = r;

		r->prox = p;
			
		r->dado = al;

		li->qtd++;

		li->ordenada = 0;

		return SUCCESS;
	}

	r->dado = al;

	r->prox = p;

	q->prox = r;

	li->qtd++;

	li->ordenada = 0;

	return SUCCESS;

}


int remove_lista(Lista *li, int mat)
{
	if (li == NULL)
	{
		return ERROR;
	}

	Lista_no *p;
	Lista_no *q;
	Lista_no *r;

	int i = 0;

	if (li->head == NULL)
	{
		return ELEM_NOT_FOUND;
	} 
	q = li->head;
	r = q->prox;

	for (p = li->head; p->dado.matricula != mat; p = p->prox)
	{
		if (p == NULL)
		{
			return ELEM_NOT_FOUND;
		}		
		r = r->prox;
		i++;
	}

	for (int j = 0; j < i; ++j)
	{
		q = q->prox;
	}

	q->prox = r;

	free(p);

	li->qtd--;

	return SUCCESS;
}

int remove_lista_inicio(Lista *li)
{
	if(li == NULL)
	{
		return ERROR;
	}

	Lista_no *p;
	Lista_no *q;

	if (li->head == NULL)
	{
		return ELEM_NOT_FOUND;
	}
	else
	{
		p = li->head;

		q = p->prox;

		li->head = q;
	}

	free(p);

	li->qtd--;

	return SUCCESS;

}

int remove_lista_final(Lista *li)
{
	if (li == NULL)
	{
		return ERROR;
	}

	Lista_no *p;
	Lista_no *q;

	for (q = li->head; q->prox !=NULL; q = q->prox);

	for (p = li->head; p->prox != q; p = p->prox);

	free(q);

	p->prox = NULL;

	li->qtd--;

	return SUCCESS;
}

int lista_vazia(Lista *li)
{
	if (li == NULL)
	{	
		return ERROR;
	}

	if (li->head == NULL)
	{	
		return SUCCESS;
	}
	else
		return ERROR;

}

int lista_cheia(Lista *li)
{
	return ERROR;
}

int liberar_lista(Lista *li)
{
	if (li == NULL)
	{
		return ERROR;
	}

	Lista_no *p;
	Lista_no *q;

	if (li->head == NULL)
	{
		free(li);
		return SUCCESS;
	}
	else
	{
		q = li->head;
		p = li->head;
		while(p->prox != NULL)
		{
	
			p = q;
			q = q->prox;
			li->head = q;

			free(p);
		} 

		//free(p);

		free(li);

		return SUCCESS;
	}
}

void imprime_lista(Lista *li)
{
	if (li == NULL)
	{	
		return;
	}

	Lista_no *p;

	printf("Numero de elementos: %d\n", li->qtd);
	puts("--------------------------------------------------------------------\n");

	if (li->ordenada == 0)
	{
		printf("Lista ordenada");
		puts("--------------------------------------------------------------------\n");
	}
	else
		printf("Lista não ordenada");
		puts("--------------------------------------------------------------------\n");

	for (p = li->head; p != NULL; p = p->prox)
	{	
		printf("Matricula: %d\n", p->dado.matricula);
		printf("Nome: %s\n", p->dado.nome);
		printf("Notas: %f %f %f\n", p->dado.n1, p->dado.n2, p->dado.n3);
		puts("--------------------------------------------------------------------\n");
	}
	
}