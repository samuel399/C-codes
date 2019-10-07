#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
	char rua[50];
	char cidade[30];
	char estado[3];
	char complemento[30];
	int numero;
	int cep;
	
} Endereco;

int main()
{
	Endereco a[3];

	strcpy(a[0].rua, "Nego Amancio");
	strcpy(a[1].rua, "Joao Naves de Avila");
	strcpy(a[2].rua, "Quintino Bocaiuva");

	a[0].numero = 360;
	a[1].numero = 125;
	a[2].numero = 15;

	strcpy(a[0].complemento, "sem complemento");
	strcpy(a[1].complemento, "bloco b");
	strcpy(a[2].complemento, "sem complemento");

	a[0].cep = 38414187;
	a[1].cep = 39415162;
	a[2].cep = 38450623;

	strcpy(a[0].cidade, "Uberlandia");
	strcpy(a[1].cidade, "São Paulo");
	strcpy(a[2].cidade, "Prata");

	strcpy(a[0].estado, "MG");
	strcpy(a[1].estado, "SP");
	strcpy(a[2].estado, "MG");

	printf("Endereços em MG:\n\n");

	for (int i = 0; i < 3; ++i)
	{
		if (strcmp(a[i].estado,"MG") == 0)
		{
			printf("Rua: %s\n", a[i].rua);
			printf("Numero: %d\n", a[i].numero);
			printf("CEP: %d\n", a[i].cep);
			printf("Complemento: %s\n", a[i].complemento);
			printf("Cidade: %s\n", a[i].cidade);
			printf("Estado: %s\n\n", a[i].estado);
		}
	}


	return 0;
}