#include <stdio.h>
#include <stdlib.h>
#include "taddupla.h"

void add_aluno(Aluno *al)
{
	printf("Digite os dados do Aluno\n");
	puts("=========================================");

	printf("Matricula: ");
	scanf("%d", &al->matricula);

	printf("\nNome: ");
	scanf("%s", al->nome);
	getchar();

	printf("\nNota prova 1: ");
	scanf("%f", &al->n1);

	printf("\nNota prova 2: ");
	scanf("%f", &al->n2);

	printf("\nNota prova 3: ");
	scanf("%f", &al->n3);

	return;
	
}

void imprime_aluno(Aluno al)
{
    puts("=========================================\n");

	printf("Matricula: %d\n", al.matricula);
	printf("Nome: %s\n", al.nome);
	printf("Notas 1, 2, 3: %0.2f, %0.2f, %0.2f\n", al.n1, al.n2, al.n3);

    puts("=========================================\n");

}

void menu_find()
{
	printf("\n\t Menu de Consulta Alunos\n");
    puts("=========================================");

	printf("1- Consultar pela Posição\n");
	printf("2- Consultar pela Matricula\n");
	printf("3- Consultar o Primeiro\n");
	printf("4- Consultar o Ultimo\n");
	printf("5- Consultar a Posição\n");
	printf("6- Voltar\n");

    puts("=========================================\n");

    return;
}


void menu_list_add()
{
	printf("\n\t Menu Adicionar Alunos\n");
    puts("=========================================");

	printf("1- Adicionar Aluno no Inicio\n");
	printf("2- Adicionar Aluno no Final\n");
	printf("3- Adcionar Aluno em uma Posição\n");
	printf("4- Adicionar Aluno Ordernadamente\n");
	printf("5- Voltar\n");

    puts("=========================================\n");

    return;
}

void menu_list_remove()
{
	printf("\n\t Menu Remover Alunos\n");
    puts("=========================================");

	printf("1- Remover Aluno no Inicio\n");
	printf("2- Remover Aluno no Final\n");
	printf("3- Remover Aluno pela Posição\n");
	printf("4- Remover Aluno pela Matricula\n");
	printf("5- Voltar\n");

    puts("=========================================\n");

    return;
}

void menu_func_list()
{
	printf("\n\t Menu Funções Lista\n");
    puts("=========================================");

	printf("1- Liberar Lista\n");
	printf("2- Tamanho da Lista\n");
	printf("3- Imprime Lista\n");
	printf("4- Voltar\n");

    puts("=========================================\n");

    return;
}

void menu()
{
	printf("\n\t Menu de Alunos\n");
    puts("=========================================");

	printf("1- Criar Lista\n");
	printf("2- Funções Lista\n");
	printf("3- Adicionar Aluno\n");
	printf("4- Remover Aluno\n");
	printf("5- Consultar na Lista\n");
	printf("6- Sair\n");

    puts("=========================================\n");

    return;
}


int main(void)
{

	List *li;
	Aluno al;
	char op = ' ';
	int pos = 0;
	int tamanho = 0;

	menu();

	while(op != '\0') // while dos menus
	{		
		
		printf("Selecione uma opção: ");
		scanf("%c", &op);
		
		getchar();
		
		printf("\n");

		if (op == '1')
		{
			li = list_creat();

			if (li == NULL)
			{
				printf("\tERROR!!\n\n");

				op = '\0';
			}
			else
			{
				printf(" Lista criada! \n\n");
				menu();
			}
		}
		else if (op == '2')
		{
			menu_func_list();

			printf("Selecione uma opção: ");
			scanf("%c", &op);
			getchar();
			printf("\n");

			if (op == '1')
			{
				tamanho = list_free(li);

				if (tamanho == -1)
				{
					printf("\t ERROR!!!!\n\n");
				}

				menu();
			}
			else if (op == '2')
			{
				tamanho = list_size(li);

				printf("\nO tamanho da lista é: %d\n", tamanho);

				menu();
			}
			else if (op == '3')
			{
				list_print(li);

				menu();
			}
			else if (op == '4')
			{
				menu();
			}
			else
			{
				printf("VALOR INVALIDO\n");
				op = '\0';
			}
		}
		else if (op == '3')
		{
			menu_list_add();

			printf("Selecione uma opção: ");
			scanf("%c", &op);
			getchar();
			printf("\n");

			if (op == '1')
			{
				add_aluno(&al);

				list_push_front(li, al);

				getchar();

				menu();
			}
			else if (op == '2')
			{
				add_aluno(&al);
		
				list_push_back(li, al);

				getchar();

				menu();

			}
			else if (op == '3')
			{

				printf("Digite a posição ");
				scanf("%d", &tamanho);

				add_aluno(&al);

				list_insert(li, tamanho, al);

				getchar();

				menu();
			}
			else if (op == '4')
			{
				
				add_aluno(&al);

				list_insert_ord(li, al);

				getchar();

				menu();

			}
			else if (op == '5')
			{
				menu();
			}
			else
			{
				printf("VALOR INVALIDO!!\n");
				op = '\0';
			}
		}
		else if (op == '4')
		{
			menu_list_remove();

			printf("Selecione uma opção: ");
			scanf("%c", &op);
			getchar();
			printf("\n");

			if (op == '1')
			{
				list_pop_front(li);

				menu();
			}
			else if (op == '2')
			{
				list_pop_back(li);

				menu();
			}			
			else if (op == '3')
			{
				printf("Digite a posição: ");
				scanf("%d", &tamanho);

				pos = list_erase_pos(li, tamanho);

				if (pos == 0)
				{
					printf("Aluno Removido\n");

					getchar();

					menu();
				}
				else
				{
					printf("Elemento Não Encontrado!!\n");
					menu();
				}
			}
			else if (op == '4')
			{
				printf("Digite a matricula: ");
				scanf("%d", &pos);

				tamanho = list_erase_mat(li, pos);

				if (tamanho == 0)
				{

					printf("Aluno Removido!\n");
					getchar();

					menu();

				}
				else
				{
					printf("Elemento Não Encontrado!!\n");
					menu();
				}
			}
			else if (op == '5')
			{
				menu();
			}
			else
			{
				printf("VALOR INVALIDO!!!\n");
				op = '\0';
			}
		}
		else if (op == '5')
		{
			menu_find();

			printf("Selecione uma opção: ");
			scanf("%c", &op);
			getchar();
			printf("\n");

			if (op == '1')
			{
				printf("Digite a Posição: ");
				scanf("%d", &pos);

				tamanho = list_find_pos(li, pos, &al);

				getchar();

				if (tamanho == -2)
				{
					printf("Elemento Não Encontrado!!\n");
					menu();
				}
				else
				{

					imprime_aluno(al);

					menu();
				}

			}
			else if (op == '2')
			{
				printf("Digite a Matricula: ");
				scanf("%d", &pos);

				getchar();

				tamanho = list_find_mat(li, pos, &al);

				if (tamanho == -2)
				{
					printf("Elemento Não Encontrado!!\n");
					menu();
				}
				else
				{				
					imprime_aluno(al);

					menu();
				}

			}
			else if (op == '3')
			{
				tamanho = list_front(li, &al);
			
				
			
				if (tamanho == -2)
				{
					printf("Elemento Não Encontrado!!\n");
					menu();
				}
				else
				{

					imprime_aluno(al);
					menu();
				}


			}
			else if (op == '4')
			{
				tamanho = list_back(li, &al);
				
				if (tamanho == -2)
				{
					printf("Elemento Não Encontrado!!\n");
					menu();
				}
				else
				{
					imprime_aluno(al);

					menu();

				}

			}
			else if (op == '5')
			{
				printf("Digite a Matricula: ");
				scanf("%d", tamanho);

				list_getpos(li, tamanho, &pos);
				
				getchar();
				
				if (pos == -2)
				{
					printf("Elemento Não Encontrado!!\n");

					menu();menu();
				}
				else
				{
					printf("A posição é: %d\n", pos);

					menu();
				}
			}
			else if (op == '6')
			{
				menu();
			}
			else 
			{
				printf("VALOR INVALIDO!!!\n");
				op = '\0';
			}
		}
		else if (op == '6')
			{
				op = '\0';
			}
		else
		{
			printf("VALOR INVALIDO!!\n");
			op = '\0';
		}
	}

	return 0;
}