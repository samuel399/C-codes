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

	printf("O nome digitado é: %s\n", nome);


	return 0;
}