#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 1;
	int cont = 0;

	printf("Quantos numeros deseja somar?\n");
	scanf("%d",&cont);
	cont--;
	for (int i = 2; 0 < cont; i++)
	{
		a += i;
		cont--;
	}
	printf("%d\n", a);
	return 0;
}