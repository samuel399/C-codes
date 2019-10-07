#include <stdio.h>
#include <stdlib.h>

void trocavar(double *a, double *b)
{
	double temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return;
}

int main(void)
{
	double a = 0;
	double b = 0;
	double *pa = NULL;
	double *pb = NULL;

	pa = &a;
	pb = &b;

	printf("Digite o valor de A: ");
	scanf("%lf", &a);

	printf("Digite o valor de B: ");
	scanf("%lf", &b);

	trocavar(pa, pb);

	printf("Valor de A: %.2f\n", *pa);
	printf("Valor de B: %.2f\n", *pb);

	return 0;
}