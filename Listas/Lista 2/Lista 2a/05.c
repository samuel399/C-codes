#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nums[5] = {0};
	int cont = 1;
	for (int i = 0; i < 5; i++)
	{
		printf("Entre com o numero %d: ", cont++);
		scanf("%d", &nums[i]);
	}

	printf("Os valores lidos sao: ");

	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", nums[i]);
	}

	printf("\n");

	int maior = nums[0];
	int menor = nums[0];
	float soma = 0;

	for (int i = 0; i < 5; ++i)
	{
		if (maior < nums[i])
		{
			maior = nums[i];
		}
		if (menor > nums[i])
		{
			menor = nums[i];
		}
		soma += nums[i];
	}

	soma = soma/5;

	printf("O maior valor é: %d\n", maior);
	printf("O menor valor é: %d\n", menor);
	printf("A media é: %.2f\n", soma);
	
	return 0;
}