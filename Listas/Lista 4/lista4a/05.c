#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
	char matricula[13];
	char nome[50];
	float nota[3];
	float media;
	int faltas;
	
} Cad_alunos;

void calcmedia(Cad_alunos *alunos)
{
	for (int i = 0; i < 3; ++i)
	{
		alunos[i].media = (alunos[i].nota[0] + alunos[i].nota[1] + alunos[i].nota[2]);
	}
}

void cadastraaluno(Cad_alunos *alunos)
{
	printf("\n<< Cadastro de Alunos >>\n\n");
	printf("Entre com os dados\n");

	for (int i = 0; i < 3; ++i)
	{
		printf("\nAluno %d\n", i+1);
		printf("Numero de Matricula: ");
		fgets(alunos[i].matricula, 13, stdin);
		alunos[i].matricula[strcspn(alunos[i].matricula, "\n")] = '\0';

		printf("Nome: ");
		fgets(alunos[i].nome, 50, stdin);
		alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

		printf("Nota 1: ");
		scanf("%f", &alunos[i].nota[0]);

		printf("Nota 2: ");
		scanf("%f", &alunos[i].nota[1]);

		printf("Nota 3: ");
		scanf("%f", &alunos[i].nota[2]);

		printf("Numero de Faltas: ");
		scanf("%d", &alunos[i].faltas);
		printf("\n");
		
		getchar();
	}

}

int main(void)
{
	Cad_alunos alunos[3];
	Cad_alunos *palunos;
	float maior_nota = 0;
	float maior_media = 0;
	float menor_media = 0;

	palunos = alunos;

	cadastraaluno(palunos);
	calcmedia(palunos);

	maior_nota = alunos[0].nota[0];
	maior_media = alunos[0].media;
	menor_media = alunos[0].media;

	for (int i = 0; i < 3; ++i)
	{
		if (maior_nota < alunos[i].nota[0])
		{
			maior_nota = alunos[i].nota[0];
		}
		if (maior_media < alunos[i].media)
		{
			maior_media = alunos[i].media;
		}
		if (menor_media > alunos[i].media)
		{
			menor_media = alunos[i].media;
		}
	}
	if (maior_media > 100)
	{
		maior_media = 100;
	}



	printf("A maior nota da prova 1 é: %.2f\n", maior_nota);
	printf("A maior media é: %.2f\n", maior_media);
	printf("A menor media é: %.2f\n", menor_media);

	for (int i = 0; i < 3; ++i)
	{
		if (alunos[i].faltas > 18)
		{
			printf("Aluno %d reprovado por falta\n", i+1);
		}
		else if (alunos[i].media >= 60)
		{
			printf("Aluno %d aprovado\n", i+1);
		}
		else if (alunos[i].media < 60)
		{
			printf("Aluno %d reprovado\n", i+1);
		}
		else if (alunos[i].faltas > 18 && alunos[i].media < 60)
		{
			printf("Aluno %d reprovado por falta\n", i+1);
		}
	}



	return 0;
}