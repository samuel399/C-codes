#include <stdio.h>
#include <stdlib.h>

void desenhalinha()
{
	for (int i = 0; i < 60; ++i)
	{
		printf("=");
	}
	return;
}

void potencia(float num, int exp)
{	
	float temp = 0;
	temp = num;

	if (exp == 0)
	{
		desenhalinha();
		printf("\nO resultado é: %d\n", 1);
		desenhalinha();
		printf("\n");
	}
	else if (exp > 0)
	{
		for (int i = 1; i < exp; i++)
		{
			num = num*temp;
		}
		desenhalinha();
		printf("\nO resultado é: %.0f\n", num);
		desenhalinha();
		printf("\n");
	}
	else if (exp < 0)
	{
		for (int i = exp; i <= 0; i++)
		{
			num = (num)*(1/temp);
		}
		desenhalinha();
		printf("\nO resultado é: %.3f\n", num);
		desenhalinha();
		printf("\n");
	}

	return;
}

int main()
{
	int expoente = 0;
	float num = 0;

	printf("\n");
	desenhalinha();
	
	printf("\nDigite o valor do numero: ");
	scanf("%f", &num);
	
	printf("Digite o valor do expoente: ");
	scanf("%d", &expoente);

	potencia(num, expoente);
	printf("\n");

	return 0;
}