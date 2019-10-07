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

void calcfatorial(int fat)
{
	int fatorial = 1;

	for (int i = fat; i > 0; i--)
	{
		fatorial *= i;
	}
	printf("O fatorial é: %d\n",fatorial);

	return;
}

int main(void)
{
	unsigned long int fatorial = 0;
	desenhalinha();

	printf("\nDigite o numero para ser caulculado o fatorial: ");
	scanf("%lu", &fatorial);
	
	desenhalinha();
	printf("\n");
	calcfatorial(fatorial);
	desenhalinha();
	printf("\n");


	return 0;
}