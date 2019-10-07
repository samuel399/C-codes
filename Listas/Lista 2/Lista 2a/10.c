#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vet1[3] = {0};
	int vet2[3] = {0};
	int vet3[3] = {0};
	int count = 1;

	printf("<<<Subtração de vetores>>>\n\n");

	for (int i = 0; i < 3; ++i)
	{
		printf("Digite o valor %d do vetor A: ", count);
		scanf("%d", &vet1[i]);
	}

	printf("\n");

	for (int i = 0; i < 3; ++i)
	{
		printf("Digite o valor %d do vetor B: ", count);
		scanf("%d", &vet2[i]);
	}

	for (int i = 0; i < 3; ++i)
	{
		vet3[i] = vet1[i] - vet2[i];
	}
	printf("\nO vetor C definido como C = A-B é: (");

	for (int i = 0; i < 3; ++i)
	{
		printf("%d,", vet3[i]);
	}
	printf(")\n");


	return 0;
}