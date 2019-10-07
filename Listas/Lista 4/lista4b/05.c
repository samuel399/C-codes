#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int quadperfeio(float num)
{
	float temp = 0;
	double x = 0;
	temp = sqrt(num);

	float frac = 0;

	frac = modf(temp, &x);

	if (frac == 0)
	{
		return 0;
	}
	else
	{	
		return 1;
	}
}


int main(void)
{
	float valor = 0;
	int verifica = 0;
	printf("\n<<< Quadrado Perfeito >>>\n\n");

	printf("Digite o valor do numero: ");
	scanf("%f", &valor);

	verifica = quadperfeio(valor);

	if (verifica == 0)
	{
		printf("Verdadeiro\n");
	}
	else
	{
		printf("Falso\n");
	}
	return 0;
}