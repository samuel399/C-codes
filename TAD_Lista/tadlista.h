typedef struct 
{
	int matricula;
	char  nome[30];
	float n1,n2,n3;
	
}Aluno;

typedef struct lista Lista;

Lista* criarlista(int tamanho);

void liberar(Lista *li);
void imprime_lista(Lista *li);

int consulta_elem_pos(Lista *li, int pos, Aluno *al);
int consulta_elem_matricula(Lista *li, int mat, Aluno *al);
int insere_lista_final(Lista *li, Aluno al);
int insere_lista_inicio(Lista *li, Aluno al);
int insere_lista_ordenada(Lista *li, Aluno al);
int remove_lista(Lista *li, int mat);
int remove_lista_otimizado(Lista *li, int mat);
int remove_lista_inicio(Lista *li);
int remove_lista_final(Lista *li);
int tamanho_lista(Lista *li);
int lista_vazia(Lista *li);
int compacta(Lista *li);