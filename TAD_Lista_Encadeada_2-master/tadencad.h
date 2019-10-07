/*
*	Códigos de Erros:
*		
*		Success -> 0;
* 		Error -> -1;
*		Element not found -> -2;
*		Out of memorie -> NULL;
*/

typedef struct 
{
	int matricula;
	char  nome[30];
	float n1,n2,n3;
	
}Aluno;

typedef struct lista Lista;

/*
*	criarlista - cria uma lista para armazenar alunos;
*	Parameters: nenhum;
*	Return: ponteiro para estrutura Lista;
*/
Lista* criar_lista();

/*
*	imprime_lista - imprime a lista com todos os alunos dela;
*	Parameters: ponteiro para estrutura Lista;
*	Return: void;
*/
void imprime_lista(Lista *li);

/*
*	liberar_lista - libera a memória ocupada pela lista;
*	Parameters: ponteiro para estrutura Lista;
*	Return: inteiro;
*/
int liberar_lista(Lista *li);

/*
*	consulta_lista_pos - acha o aluno pela posição dada;
*	Parameters: ponteiro para estrutura Lista, inteiro da posição, ponteiro da estrutura aluno, para receber o aluno da consulta;
*	Return: inteiro;
*/
int consulta_lista_pos(Lista *li, int pos, Aluno *al);

/*
*	consulta_lista_mat - acha o aluno pela matricula dada;
*	Parameters: ponteiro para estrutura Lista, inteiro da matricula do aluno, ponteiro da estrutura aluno, para receber o aluno da consulta;
*	Return: inteiro;
*/
int consulta_lista_mat(Lista *li, int mat, Aluno *al);

/*
*	tamanho_lista - faz a contagem de quantos alunos se tem na lista;
*	Parameters: ponteiro para estrutura Lista;
*	Return: inteiro que indica a quantidade de alunos;
*/
int tamanho_lista(Lista *li);

/*
*	insere_lista_inicio - insere um aluno no inicio da lista
*	Parameters: ponteiro para estrutura Lista, variavel da estrutura Aluno;
*	Return: inteiro;
*/
int insere_lista_inicio(Lista *li, Aluno al);

/*
*	insere_lista_final - insere um aluno no final da lista
*	Parameters: ponteiro para estrutura Lista, variavel da estrutura Aluno;
*	Return: inteiro;
*/
int insere_lista_final(Lista *li, Aluno al);

/*
*	insere_lista_pos - insere um aluno na posição passda da lista, se a posição for maior ou igual a posição de alunos,
*	o aluno será colocado na ultima posição;
*	Parameters: ponteiro para estrutura Lista, inteiro da posiçao, variavel da estrutura Aluno;
*	Return: inteiro;
*/
int insere_lista_pos(Lista *li, int pos, Aluno al);

/*
*	insere_lista_ordenado - insere um aluno ordenadamente na lista a partir da matricula;
*	Parameters: ponteiro para estrutura Lista, variavel da estrutura Aluno;
*	Return: inteiro;
*/
int insere_lista_ordenado(Lista *li, Aluno al);

/*
*	remove_lista - remove o aluno informado pela matricula;
*	Parameters: ponteiro para estrutura Lista, inteiro da matricula do aluno;
*	Return: inteiro;
*/
int remove_lista(Lista *li, int mat);

/*
*	remove_lista_inicio - remove o aluno do inicio da lista;
*	Parameters: ponteiro para estrutura Lista;
*	Return: inteiro;
*/
int remove_lista_inicio(Lista *li);

/*
*	remove_lista_final - remove o aluno do final da lista;
*	Parameters: ponteiro para estrutura Lista;
*	Return: inteiro;
*/
int remove_lista_final(Lista *li);

/*
*	lista_vazia - indica se a lista de alunos esta vazia ou não;
*	Parameters: ponteiro para estrutura Lista;
*	Return: inteiro;
*/
int lista_vazia(Lista *li);

/*
*	lista_cheia - indica se a lista de alunos esta cheia ou não, neste caso a lista nunca irá estar cheia,
*   logo a funçao sempre retorna ERROR;
*	Parameters: ponteiro para estrutura Lista;
*	Return: inteiro;
*/
int lista_cheia(Lista *li);