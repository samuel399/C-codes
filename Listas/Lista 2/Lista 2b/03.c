#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char nome[50];
	char a;
	int posicao = 0;

	setbuf(stdin, NULL);

	printf("\n<<< VETOR DE Char >>>\n\n");

	printf("Digite o nome: ");

	a = getchar();

	while(a != '\n')
	{
		nome[posicao] = a;
		posicao++;
		a = getchar();
	}

	printf("\nO nome digitado é: ");

	for (int i = 0; i < posicao; ++i)
	{
		nome[i] = toupper(nome[i]);
		printf("%c", nome[i]);
	}
	printf("\n");

	return 0;
}