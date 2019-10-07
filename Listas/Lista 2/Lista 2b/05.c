#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char nome1[50];
	char nome2[50];
	char a;
	short int contador = 0;
	int posicao = 0;

	setbuf(stdin, NULL);

	printf("\n<<< COMPARA NOMES >>>\n\n");

	printf("Digite o nome 1: ");

	a = getchar();

	while(a != '\n')
	{
		nome1[posicao] = a;
		posicao++;
		a = getchar();
	}

	posicao = 0;
	setbuf(stdin, NULL);

	printf("Digite o nome 2: ");

	a = getchar();

	while(a != '\n')
	{
		nome2[posicao] = a;
		posicao++;
		a = getchar();
	}
	
	for (int i = 0; i < posicao; ++i)
	{
		nome1[i] = tolower(nome1[i]);
		nome2[i] = tolower(nome2[i]);
	}


	for (int i = 0; i < posicao; ++i)
	{
		if (nome1[i] != nome2[i])
		{
			contador++;
		}
	}
	
	if (contador > 0)
	{
		printf("Os nomes são diferentes\n");
	}
	else
	{
		printf("Os nomes são iguais\n");
	}

	return 0;
}