#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0;
	double b = 0;
	void *pointer = NULL;

	pointer = &a;

	printf("Digite o primeiro valor: ");
	scanf("%d", (int *)pointer);

	pointer = &b;

	printf("\nDigite o segundo valor: ");
	scanf("%lf", (double *)pointer);

	pointer = &a;

	printf("\nPrimeiro numero lido é: %d\n", *(int *)pointer);

	pointer = &b;

	printf("Segundo numero lido é: %.2f\n", *(double *)pointer);


	return 0;
}