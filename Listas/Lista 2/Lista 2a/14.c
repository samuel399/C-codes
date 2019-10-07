#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	unsigned int numero;
	char classe;
	double cra;
	
}Estudante;

int main()
{
	Estudante alunos[1] = {0, '\0', 0};
	short int quant_alunos = 0;

	printf("<<< Universidade >>>\n\n");

	printf("Quantos alunos serão cadastrados? ");
	scanf("%d", &quant_alunos);

	if (quant_alunos <= 10000)
	{
		Estudante alunos[quant_alunos];

		for (int i = 0; i < quant_alunos; ++i)
		{
			printf("\n\nEntre com o numero do aluno: ");
			scanf("%u", &alunos[i].numero);
			getchar();
			printf("Entre com a classe social do aluno %u: ", alunos[i].numero);
			scanf("%c", &alunos[i].classe);
			printf("Entre com o CRA do aluno %u: ", alunos[i].numero);
			scanf("%lf", &alunos[i].cra);
		}

		printf("\n==== Alunos Cadastrados ====\n");

		for (int i = 0; i < quant_alunos; ++i)
		{
			printf("Numero: %u  Classe Social: %c  CRA: %.2f\n", alunos[i].numero, alunos[i].classe, alunos[i].cra);
		}

	}
	else if (quant_alunos > 10000)
	{
		printf("ERRO!!!! Numero maximo de alunos é 10000!!!!!!\n");
	}

	return 0;
}