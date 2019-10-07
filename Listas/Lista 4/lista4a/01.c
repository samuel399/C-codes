#include <stdio.h>
#include <stdlib.h>

typedef struct $
{
	short int ddd;
	int numero_telefone;
	
} telefone;

int main()
{

	telefone num[3];

	num[0].ddd = 34;
	num[1].ddd = 11;
	num[2].ddd = 31;

	num[0].numero_telefone = 991582475;
	num[1].numero_telefone = 917264833;
	num[2].numero_telefone = 974851264;

	for (int i = 0; i < 3; ++i)
	{
		printf("Numero cadastrado: (%d) %d\n", num[i].ddd, num[i].numero_telefone);
	}


	return 0;
}