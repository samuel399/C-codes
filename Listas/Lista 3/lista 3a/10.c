#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vetor[10] = {1, 2, 123, 74, 54, 6, 45, 89, 974, 1035};

	for (int i = 0; i < 10; ++i)
	{
		printf(" %d\n", *(vetor+i));

	}

	return 0;
}