#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char nome1[50];
	char nome2[50];

	printf("\n<<< COMPARA NOMES >>>\n\n");

	printf("Digite o nome 1: ");
	gets(nome1);

	printf("\nDigite o nome 2: ");
	gets(nome2);

	if (strcmp(nome1, nome2) != 0)
	{
		printf("Os nomes digitados são diferentes\n");
	}
	else
	{
		printf("Os nomes digitados são iguais\n");
	}
	return 0;
}