#include <stdio.h>
#include <stdlib.h>

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
	
	printf("\nO nome digitado é: %s\n", nome);

	return 0;
}
/*
*	No printf() com o %s ele ira imprimir ate encontrar o fim da string,  
* que é identificado com o '\0'.
*
*/