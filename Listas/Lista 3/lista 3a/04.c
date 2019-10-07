#include <stdio.h>
#include <stdlib.h>

int main()
{
	int val[5] = {2,4,5,8,10};
	int *pval = NULL;
	
	for (int i = 0; i < 5; ++i)
	{
		pval = &val[i];

		*pval -= 1;
		//printf("%d\n", val[i]);
	}


	return 0;
}