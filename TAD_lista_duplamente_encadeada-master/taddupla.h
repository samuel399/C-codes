typedef struct 
{
	int matricula;
	char  nome[30];
	float n1,n2,n3;
	
}Aluno;

typedef struct DLinkedList List;

List* list_creat();

int list_size(List *li);

int list_print(List *li);

int list_free(List *li);


int list_find_pos(List *li, int pos, Aluno *al);

int list_find_mat(List *li, int mat, Aluno *al);

int list_front(List *li, Aluno *al);

int list_back(List *li, Aluno *al);

int list_getpos(List *li, int mat, int *pos);


int list_push_front(List *li, Aluno al);

int list_push_back(List *li, Aluno al);

int list_insert(List *li, int pos, Aluno al);

int list_insert_ord(List *li, Aluno al);


int list_pop_front(List *li);

int list_pop_back(List *li);

int list_erase_pos(List *li, int pos);

int list_erase_mat(List *li, int mat);



