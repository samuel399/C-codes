#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nums[6] = {0};

	printf("Entre com o numero 1: ");
	scanf("%d", &nums[0]);

	printf("Entre com o numero 2: ");
	scanf("%d", &nums[1]);

	printf("Entre com o numero 3: ");
	scanf("%d", &nums[2]);

	printf("Entre com o numero 4: ");
	scanf("%d", &nums[3]);

    printf("Entre com o numero 5: ");
	scanf("%d", &nums[4]);

	printf("Entre com o numero 6: ");
	scanf("%d", &nums[5]);

	printf("Os valores lidos sao: %d %d %d %d %d %d \n", nums[0], nums[1], nums[2], nums[3], nums[4], nums[5]);
	return 0;
}