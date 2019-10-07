#include <stdio.h>
#include <stdlib.h>


void imprimeop(void);
void convertekm(void);
void convertems(void);


// funçao que converte km/h em m/s

void convertekm()
{
	double km = 0.0;
	double result = 0.0;

	printf("<<Opção 1>>\n");
	printf("Digite a velocidade (km/h): ");
	scanf("%lf", &km);

	result = km / 3.6;

	printf("A velocidade em m/s é %f\n\n", result);

	imprimeop();
}

// Funçao que converte m/s em km/h

void convertems()
{
	double ms = 0.0;
	double result = 0.0;

	printf("<<Opção 2>>\n");
	printf("Digite a velocidade (m/s): ");
	scanf("%lf", &ms);

	result = ms * 3.6;

	printf("A velocidade em km/h é %f\n\n", result);

}

// funçao que imprime as opçoes e vai para as funçeos de conversao

void imprimeop()
{
	int op = 0;
	printf("<<< CONVERSOR >>>\n");
	printf("1 - Converter km/h em m/s\n");
	printf("2 - Converter m/s em km/h\n");
	printf("3 - Sair\n\n");
	printf("Digite uma opção: ");
	scanf("%d", &op);
	printf("\n");
	if (op > 3)
	{
		printf("Essa opção não existe!!!!!!!\n\n");
		imprimeop();
	} 
	else if (op == 1)
	{
		convertekm();
	}
	else if (op == 2)
	{
		convertems();
	}
	else if (op == 3)
	{
		return;
	}


	return;
}

int main()
{
	imprimeop();
	return 0;
}