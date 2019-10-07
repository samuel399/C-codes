#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char nome[] = "José Augusto";
	char *pnome = NULL;

	for (int i = 0; i < strlen(nome); ++i)
	{
		pnome = &nome[i];
		printf("%c", *pnome);
	}
	
	printf("\n");

	return 0;
}