#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int a = 10;
	while(a >= 0)
	{
		if (a == 0)
		{
			printf("%d... FIM!\n", a);
		} else {
			printf("%d... ", a);		
		}
		a--;

	}
	return 0;
}