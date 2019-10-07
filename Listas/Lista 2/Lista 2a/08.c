#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	unsigned int soma_media_quadrada = 0;
	float media = 0;
	float notas[5];
	int sub_media[5] = {0};
	double despd = 0;
	int j = 1;

	for (int i = 0; i < 5; ++i) // ler as variaveis
	{
		printf("Entre com o valor %d: ", j++);
		scanf("%f",&notas[i]); 
	}

	for (int i = 0; i < 5; ++i)
	{
		media += notas[i];
	}

	media = (media/5); // media pronta

	for (int i = 0; i < 5; ++i)
	{
		sub_media[i] = (notas[i] - media);
		sub_media[i] = pow(sub_media[i], 2);
		soma_media_quadrada += sub_media[i];
	}

	despd = (soma_media_quadrada/4);

	despd = sqrt(despd);

	printf("A média é %.1f e o desvio padrão é %.15f\n", media, despd);

	return 0;
}