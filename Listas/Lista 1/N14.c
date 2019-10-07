#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int a = 0;
	unsigned int b = 0;

	printf("Entre com um valor: ");
	scanf("%u", &a);

	for (int i = 1; i <= a; ++i)
	{
		if ((a % i) == 0)
		{
			b += 1;
		} 
	}
	if (b == 2)
	{
		printf("O numero %u é primo\n", a);
	} 
	else
	{
		printf("O numero %u não é primo\n", a);
	}

	return 0;
}