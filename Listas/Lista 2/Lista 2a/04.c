#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nums[6] = {0};
	int cont = 1;

	for (int i = 0; i < 6; ++i)
	{
		printf("Entre com o valor %d: ", cont);
		scanf("%d", &nums[i]);

		if ((nums[i]%2) != 0)
		{
			printf("Erro valor invalido\n\n");
			i--;
		}
		else
		{
			cont++;
		}
	}

	printf("Os numeros digitados foram: ");

	for (int i = 0; i < 6; ++i)
	{
		printf("%d ", nums[i]);
	}

	printf("\n");

	return 0;
}