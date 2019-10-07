#include <stdio.h>
#include <stdlib.h>

int main()
{
	char nome[40];
	char sobrenome[40];
	char a;
	int posicao = 0;

	setbuf(stdin, NULL);

	printf("\n<<< VETOR DE Char >>>\n\n");

	printf(" Digite o nome e sobrenome: ");

	a = getchar();

	while(a != ' ')
	{
		nome[posicao] = a;
		posicao++;
		a = getchar();
	}

	setbuf(stdin, NULL);

	a = getchar();
	posicao = 0;
	while(a != '\n')
	{
		sobrenome[posicao] = a;
		posicao++;
		a = getchar();
	}

	printf("\n Nome: ");

	for (int i = 0; i < posicao; ++i)
	{
		printf("%c", nome[i]);
	}
	
	printf("\n Sobrenome: ");
	
	for (int i = 0; i < posicao; ++i)
	{
		printf("%c", sobrenome[i]);
	}

	printf("\n");

	return 0;
}