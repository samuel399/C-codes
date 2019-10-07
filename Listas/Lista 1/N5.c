#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0;
	printf("Digite um valor: \n");
	scanf("%d", &a);
	do
	{
		printf("%d... ", a);
		if (a == 0)
		{
			printf("FIM!\n");
		}
		a--;
	} while (a >= 0);
	return 0;
}