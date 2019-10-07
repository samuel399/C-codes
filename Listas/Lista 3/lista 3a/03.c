#include <stdio.h>
#include <stdlib.h>

int main()
{
	int val[5] = {2,4,5,8,10};
	int *pval = NULL;
	

	printf("<< Mostrando Valor >>\n");

	printf("Printando com ponteiros\n");
	for (int i = 0; i < 5; ++i)
	{
		pval = &val[i];
		printf("%d\n", *pval);
	}

	printf("Para cada execução do 'for' o endereço em 'pval' ira avançar para a proxima posiçao do vertor 'val'\n");
	printf("i = 0 / pval = &val[0] / \n");
	printf("i = 1 / pval = &val[1] / \n");
	printf("i = 2 / pval = &val[2] / \n");
	printf("i = 3 / pval = &val[3] / \n");
	printf("i = 4 / pval = &val[4] / \n");

	return 0;
}