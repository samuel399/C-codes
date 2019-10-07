#include <stdio.h>
#include <stdlib.h>

int main()
{
	double vetor[10] = {1.5, 2.52, 45.5, 7.9, 8.2, 6.4, 9.1, 8.1, 79.4, 35.2};

	for (int i = 0; i < 10; ++i)
	{
		printf(" %.2f\n", *(vetor+i));

	}

	return 0;
}