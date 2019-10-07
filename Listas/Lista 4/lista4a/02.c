#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int dia;
	int mes;
	int ano;

} Data;

int main()
{
	Data datas[3];

	datas[0].dia = 25;
	datas[1].dia = 27;
	datas[2].dia = 8;

	datas[0].mes = 5;
	datas[1].mes = 7;
	datas[2].mes = 2;

	datas[0].ano = 2015;
	datas[1].ano = 2000;
	datas[2].ano = 1985;

	int maior;

	maior = datas[0].ano;

	for (int i = 0; i < 3; ++i)
	{
		if (maior < datas[i].ano)
		{
			maior = datas[i].ano;
		}
	}

	printf("O maior ano é: %d\n", maior);


	return 0;
}