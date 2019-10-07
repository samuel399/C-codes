#include <stdio.h>
#include <stdio.h>

void copiavet(double *vetor, double *vetordest, int n)
{
	vetordest = malloc(n * sizeof(double));

	for (int i = 0; i < n; ++i)
	{
		vetordest[i] = vetor[i];	
	}

	return;
}

int main(void)
{
	double vetor_ori[10] = {0};
	double *vetor_dest;

	copiavet(vetor_ori, vetor_dest, 10);

	return 0;
}