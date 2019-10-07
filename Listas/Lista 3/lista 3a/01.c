#include <stdio.h>
#include <stdlib.h>

int main()
{
	int val[5] = {2,4,5,8,10};
	unsigned int endereco_val;

	endereco_val = &val[2];

	printf("<< Alterando Valor >>\n");

	printf("Entre com o numero 6: ");
	scanf("%d", endereco_val);

	printf("Valor Alterado para %d\n", val[2]);

	return 0;
}
