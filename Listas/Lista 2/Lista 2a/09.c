#include <stdio.h>
#include <stdlib.h>

int main()
{
	double media = 0;
	short int cont = 1;
	float notas[0];
	int numAlunos = 0;
	printf("<<< Média de n alunos. Máximo 100 >>>\n\n");

	printf("Entre com o número de alunos: ");
	scanf("%d", &numAlunos);

	if (numAlunos > 100)
	{	
		printf("ERRO!!! numero maximo de alunos é 100\n");
	}
	else if (numAlunos <= 100)
	{

		float notas[numAlunos];

		for (int i = 0; i < numAlunos; ++i)
		{
			printf("Digite a nota do aluno %d: ", cont++);
			scanf("%f", &notas[i]);
			media += notas[i];
		}
		media = (media/numAlunos);

		cont = 1;

		printf("\nRelatório de notas\n");	

		for (int i = 0; i < numAlunos; ++i)
		{
			printf("A nota do aluno %d é: %.0f\n", cont++, notas[i]);
		}
		printf("A média da turma é: %.1f\n", media);
	}

	return 0;
}