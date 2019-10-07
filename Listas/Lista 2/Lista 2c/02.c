#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	
	char nome[50];

	printf("\n<<< Vetor de Char >>>\n\n");

	printf("Digite o nome: ");
	gets(nome);

	for (int i = 0; i < sizeof(nome); ++i)
	{
		nome[i] = toupper(nome[i]);
	}
	printf("O nome digitado é: %s\n", nome);

	for (int i = 0; i < sizeof(nome); ++i)
	{
		nome[i] = tolower(nome[i]);
	}
	printf("O nome digitado é: %s\n", nome);
	return 0;
}