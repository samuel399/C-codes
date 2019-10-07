#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 40;
	int *p;
	p = &a;


	//A)

	printf("Endereço de a com &a: %u\n", &a);
	printf("Endereço de a com p: %u\n\n", p);
	
	//B)

	printf("Mude o valor de a: ");
	scanf("%d", p);	

	//C)

	int val[5] = {2,4,5,8,10};
	int *pval = NULL;

	pval = &val[4];

	printf("\nMude o valor 10 do verto val para 20: ");
	scanf("%d", pval);

	

	return 0;
}