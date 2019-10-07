#include <stdio.h>
#include <stdlib.h>

void desenhalinha()
{
	for (int i = 0; i < 150; ++i)
	{
		printf("=");
	}
	return;
}

int main(void)
{
	printf("\n");
	desenhalinha();
	printf("\n\n");
	return 0;
}