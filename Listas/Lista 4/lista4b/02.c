#include <stdio.h>
#include <stdlib.h>

void desenhalinha(int num)
{
	for (int i = 0; i < num; ++i)
	{
		printf("=");
	}
	return;
}

int main(void)
{
	int linhas = 0;
	printf("Digite quantas linhas serão imprimidas: ");
	scanf("%d", &linhas);
	desenhalinha(linhas);
	printf("\n\n");
	return 0;
}