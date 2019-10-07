#include <stdio.h>
#include <stdlib.h>
#include "taddupla.h"

#define SUCCESS 0
#define OUT_OF_MEMORY NULL
#define EMPTY_LIST -3
#define ELEM_NOT_FOUND -2
#define ERROR -1

typedef struct dlnode DLNode;

typedef struct DLinkedList 
{
	DLNode *begin;
	DLNode *end;
	int size;
}List;

struct dlnode
{
	Aluno data;
	DLNode *next;
	DLNode *prev;
};


List* list_creat()
{
	List *li;

	li = malloc(sizeof(List));

	if (li != NULL)
	{
		li->begin = NULL;
		li->end =  NULL;
		li->size = 0;
	}

	return li;
}

int list_find_mat(List *li, int n_mat, Aluno *al)
{
	if (li == NULL)
	{
		return ERROR;
	}

	if (li->size == 0)
	{
		return ELEM_NOT_FOUND;
	}

		DLNode *p;

		p = li->begin;

		while(p != NULL && p->data.matricula != n_mat)
		{
			p = p->next;
		}

		if (p == NULL)
		{
			return ELEM_NOT_FOUND;
		}

		*al = p->data;

		return SUCCESS;
}

int list_find_pos(List *li, int n_pos, Aluno *al)
{
	if (li == NULL)
	{
		return ERROR;
	}

	if (li->begin == NULL)
	{
		return ELEM_NOT_FOUND;
	}

	DLNode *p;

	p = li->begin;

	int i = 1;

	while(p != NULL && i != n_pos)
	{
		p = p->next;

		i++;
	}

	if (p == NULL)
	{
		return ELEM_NOT_FOUND;
	}

	*al = p->data;

	return SUCCESS;
}

int list_getpos(List *li, int mat, int *pos)
{
	if (li == NULL)
	{
		return ERROR;
	}

	if (li->begin == NULL)
	{
		*pos = ELEM_NOT_FOUND;

		return ELEM_NOT_FOUND;
	}

	DLNode *p;

	p = li->begin;

	int i = 1;

	while(p != NULL && p->data.matricula != mat)
	{
		p = p->next;

		i++;
	}

	if (p == NULL)
	{
		*pos = 	ELEM_NOT_FOUND;

		return ELEM_NOT_FOUND;
	}

	*pos = i;

	return SUCCESS;
}

int list_front(List *li, Aluno *al)
{
	if (li == NULL)
	{
		return ERROR;
	}


	if (li->begin == NULL)
	{
		return ELEM_NOT_FOUND;
	}

	DLNode *p;

	p = li->begin;

	*al = p->data;

	return SUCCESS;
}

int list_back(List *li, Aluno *al)
{
	if (li == NULL)
	{
		return ERROR;
	}


	if (li->end == NULL)
	{
		return ELEM_NOT_FOUND;
	}

	DLNode *p;

	p = li->end;

	*al = p->data;

	return SUCCESS;
}

int list_push_front(List *li, Aluno al)
{
	if (li == NULL)
	{
		return ERROR;
	}

	DLNode *node;

	node = malloc(sizeof(DLNode));

	if (node == NULL)
	{
		return ERROR;
	}

	node->data = al;

	node->prev = NULL;

	node->next = li->begin;


	if (li->begin == NULL)
	{
		li->begin = node;

		li->end = node; 

		li->size++;

		return SUCCESS;
	}

	if (li->begin != NULL)
	{
		li->begin->prev = node;

		li->begin = node;

		li->size++;

		return SUCCESS;
	}
}

int list_push_back(List *li, Aluno al)
{
	if (li == NULL)
	{
		return ERROR;
	}

	DLNode *node;

	node = malloc(sizeof(DLNode));

	if (node == NULL)
	{
		return ERROR;
	}

	node->data = al;

	node->next = NULL;

	node->prev = li->end;

	if (li->end == NULL)
	{
		li->begin = node;

		li->end = node;

		li->size++;

		return SUCCESS;
	}

	if (li->end != NULL)
	{
		li->end->next = node;

		li->end = node;

		li->size++;

		return SUCCESS;
	}
}

int list_insert(List *li, int pos, Aluno al)
{
	if(li == NULL)
	{
		return ERROR;
	}

	if (pos == 0)
	{
		return ERROR;
	}

	if (pos >= li->size)
	{
		return list_push_back(li, al);
	}
	else if(pos == 1)
	{
		return list_push_front(li, al);
	}

	DLNode *node;

	DLNode *p;

	node = malloc(sizeof(DLNode));

	if (node == NULL)
	{
		return ERROR;
	}

	node->data = al;

	node->next = li->begin;

	for (int i = 0; i < pos-1; ++i)
	{
		p = node->next;

		node->next = node->next->next;
	}

	p->next = node;

	node->prev = p;

	node->next->prev = node;

	li->size++;

	return SUCCESS;
}

int list_insert_ord(List *li, Aluno al)
{
	if (li == NULL)
	{
		return ERROR;
	}
	

	if (li->begin == NULL)
	{	
		return list_push_front(li, al);
	}


	DLNode *node;

	DLNode *p;

	DLNode *q;

	node = malloc(sizeof(DLNode));

	if (node == NULL)
	{		
		return ERROR;
	}

	node->data = al;

	p = li->begin;

	if (li->size == 1)
	{
		if(p->data.matricula > node->data.matricula)
		{
			li->begin = node;

			node->next = p;

			node->prev = NULL;

			p->prev = node;

			li->size++;

			return SUCCESS;
		}
		else if (p->data.matricula < node->data.matricula)
		{
			li->end = node;

			node->next = NULL;

			node->prev = p;

			p->next = node;

			li->size++;

			return SUCCESS;
		}
	}

	while(p->next != NULL && node->data.matricula > p->data.matricula)
	{
		p = p->next;
	}

	if (p->next == NULL && node->data.matricula > p->data.matricula)
	{
		li->end = node;

		p->next = node;

		node->prev = p;

		node->next = NULL;

		li->size++;

		return SUCCESS;
	}
	else if(p->prev == NULL)
	{
		li->begin = node;

		node->prev = NULL;

		node->next = p;

		p->prev = node;

		li->size++;

		return SUCCESS;
	}

	q = p->prev;

	node->prev = q;

	node->next = p;

	p->prev = node;

	q->next = node;

	li->size++;

	return SUCCESS;
}

int list_pop_front(List *li)
{	
	if (li == NULL)
	{
		return ERROR;
	}

	DLNode *node;

	if (li->begin == NULL)
	{
		return EMPTY_LIST;
	}

	node = li->begin;

	if (li->size == 1)
	{
		li->end = NULL;

		li->begin = NULL;

		li->size--;

		free(node);

		return SUCCESS;
	}

	li->begin = node->next;

	free(node);

	li->begin->prev = NULL;

	li->size--;

	return SUCCESS;
}

int list_pop_back(List *li)
{
	if (li == NULL)
	{
		return ERROR;
	}

	DLNode *node;

	if (li->end == NULL)
	{
		return EMPTY_LIST;
	}

	node = li->end;

	if (li->size == 1)
	{
		li->begin = NULL;

		li->end = NULL;

		li->size--;

		free(node);

		return SUCCESS;
	}

	li->end = node->prev;

	free(node);

	li->end->next = NULL;

	li->size--;

	return SUCCESS;
}

int list_erase_pos(List *li, int pos)
{
	if (li == NULL)
	{
		return ERROR;
	}

	if (li->begin == NULL)
	{
		return ELEM_NOT_FOUND;
	}

	DLNode *p;

	DLNode *q;

	DLNode *r;

	int i = 1;

	p = li->begin;

	while(p != NULL && i != pos)
	{
		p = p->next;

		i++;
	}

	if (p == NULL)
	{
		return ELEM_NOT_FOUND;
	}

	if (li->size == 1)
	{
		return list_pop_front(li);
	}

	else if (p->prev == NULL)
	{
		li->begin = p->next;

		li->begin->prev = NULL;

		free(p);

		li->size--;

		return SUCCESS;
	}

	else if (p->next == NULL)
	{
		li->end = p->prev;

		li->end->next = NULL;

		free(p);

		li->size--;

		return SUCCESS;
	}
	else
	{

		q = p->prev;

		r = p->next;

		r->prev = q;

		q->next = r;

		free(p);

		return SUCCESS;
	}
}

int list_erase_mat(List *li, int mat)
{
	if (li == NULL)
	{
		return ERROR;
	}

	if (li->begin == NULL)
	{
		return ELEM_NOT_FOUND;
	}

	DLNode *p;

	DLNode *q;

	DLNode *r;

	p = li->begin;

	while(p != NULL && p->data.matricula != mat)
	{
		p = p->next;
	}

	if (p == NULL)
	{
		return ELEM_NOT_FOUND;
	}

	if (li->size == 1)
	{
		return list_pop_front(li);
	}

	else if (p->prev == NULL)
	{
		li->begin = p->next;

		li->begin->prev = NULL;

		free(p);

		li->size--;

		return SUCCESS;
	}

	else if (p->next == NULL)
	{
		li->end = p->prev;

		li->end->next = NULL;

		free(p);

		li->size--;

		return SUCCESS;
	}
	else
	{
		q = p->prev;

		r = p->next;

		r->prev = q;

		q->next = r;

		free(p);

		return SUCCESS;
	}
}

int list_size(List *li)
{
	if (li == NULL)
	{
		return ERROR;
	}

	return li->size;
}

int list_free(List *li)
{
   if (li == NULL)
   {
      return ERROR;
   }
  
   DLNode *p;
       
   p = li->begin;
       
   while (p != NULL)
	{
   		li->begin = p->next;
            
        free(p);
                
        p = li->begin;   
    }
        free(li);
        return 0;
};

int list_print(List *li)
{
	if (li == NULL)
	{
		return ERROR;
	}

	DLNode *p;

	p = li->begin;

	if (li->begin == NULL)
	{
		puts("========================================");
		printf("\nLista Vazia!!\n\n");
		puts("========================================");

		return SUCCESS;
	}
	else
	{
		int i = 0;

		while(p != NULL && li->size > i)
		{
			printf("\nAluno:\n");
			puts("=========================================");
			
			printf("Nome: %s\n", p->data.nome);
			printf("Matricula: %d\n", p->data.matricula);
			printf("Notas 1, 2 e 3: %0.2f\n", p->data.n1, p->data.n2, p->data.n3);

			puts("=========================================\n");

			p = p->next;

			i++;
		}

		return SUCCESS;
	}
}
