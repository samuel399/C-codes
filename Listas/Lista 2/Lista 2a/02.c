#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nums[6] = {0};
	int cont = 1;
	for (int i = 0; i < 6; i++)
	{
		printf("Entre com o numero %d: ", cont++);
		scanf("%d", &nums[i]);
	}

	printf("Os valores lidos sao: ");

	for (int i = 0; i < 6; ++i)
	{
		printf("%d ", nums[i]);
	}

	printf("\n");

	return 0;
}