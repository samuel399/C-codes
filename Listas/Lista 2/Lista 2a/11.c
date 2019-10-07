#include <stdio.h>
#include <stdlib.h>

int main()
{
	int v0[5] = {0};
	int v1[5] = {0};
	int v2[5] = {0};
	int count = 1;

	printf("<<< Pares e ímpares >>>\n\n");

	for (int i = 0; i < 5; ++i)
	{
		printf("Digite o valor %d: ", count++);
		scanf("%d",&v0[i]);
	}

	for (int i = 0; i < 5; ++i)
	{
		if (v0[i]%2 == 0)
		{
			v2[i] = v0[i];
		}
		else if (v0[i]%2 == 1)
		{
			v1[i] = v0[i];	
		}
	}

	printf("Ímpares: ");

	for (int i = 0; i < 5; ++i)
	{
		if (v1[i] > 0)
		{	
			printf("%d ", v1[i]);
		}
	}
	
	printf("\n");

	printf("Pares: ");
	for (int i = 0; i < 5; ++i)
	{
		if (v2[i] > 0)
		{	
			printf("%d ", v2[i]);
		}
	}
	
	printf("\n");

	return 0;
}