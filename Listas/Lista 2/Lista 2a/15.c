#include <stdio.h>
#include <stdlib.h>

int main()
{
	int valores[8] = {0};
	int iguais[8] = {0};
	short int count = 1;

	printf("\n<<< VALORES IGUAIS >>>\n\n");

	for (int i = 0; i < 8; ++i)
	{
		printf("Entre com o numero %d: ", count++);
		scanf("%d",&valores[i]);
	}

	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			if ((valores[i] == valores[j]) && (i != j) && (iguais[i] != -1))
			{				
				iguais[i]++;
				iguais[j]--;
			}
	
		}
	}

	printf("\nValores repitidos: ");

	for (int i = 0; i < 8; ++i)
	{
		if (iguais[i] > 0)
		{
			printf("%d ", valores[i]);
		}
	}

	printf("\n");

	return 0;
}