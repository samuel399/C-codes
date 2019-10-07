#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a = 1;
	int b = 2;
	int cont = 0;
	printf("Quantos numeros deseja somar?\n");
	scanf("%d", &cont);
	cont--;
	while(cont > 0){

		a += b++;
		cont--;
	}
	printf("%d\n", a);
	return 0;
}