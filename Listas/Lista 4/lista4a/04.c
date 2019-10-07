#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	short int ddd;
	int numero_telefone;
	
} Telefone;

typedef struct
{
	int dia;
	int mes;
	int ano;

} Data;

typedef struct 
{
	char rua[50];
	char cidade[30];
	char estado[4];
	char complemento[30];
	int numero;
	int cep;
	
} Endereco;

typedef struct 
{
	char nome[50];
	char sexo;
	char estado_civil[30];
	char cpf[13];
	double salario;
	char identidade[12];
	Endereco endereco_comercial;
	Endereco endereco_residencial;
	Telefone telefone;
	Telefone telefone_comercial;
	Data data_nascimento;
	Data data_ingresso;

} Cadastro;

void imprimeop(Cadastro *pessoas);

void listarcad(Cadastro *pessoas)
{
	for (int i = 0; i < 5; ++i)
	{
		printf("Nome: %s, Sexo: %c, Estado Civil: %s, Identidade(RG): %s,\n", pessoas[i].nome, pessoas[i].sexo, pessoas[i].estado_civil, pessoas[i].identidade);
		printf("CPF: %s, Salário: %.2lf, Endereço Comercial- Rua: %s, Numero: %d, Complemento: %s, CEP: %d,\n", pessoas[i].cpf, pessoas[i].salario, pessoas[i].endereco_comercial.rua, pessoas[i].endereco_comercial.numero, pessoas[i].endereco_comercial.complemento, pessoas[i].endereco_comercial.cep);
		printf("Endereço Comercial - Cidade: %s, Estado: %s, Endereço Residencial - Rua: %s, Numero: %d, Complemento: %s, CEP: %d,\n", pessoas[i].endereco_comercial.cidade, pessoas[i].endereco_comercial.estado, pessoas[i].endereco_residencial.rua, pessoas[i].endereco_residencial.numero, pessoas[i].endereco_residencial.complemento, pessoas[i].endereco_residencial.cep);
		printf("Endereço Residencial - Cidade: %s, Estado: %s, Telefone Comercial: (%d)%d, Telefone Pessoal: (%d)%d,\n", pessoas[i].endereco_residencial.cidade, pessoas[i].endereco_residencial.estado, pessoas[i].telefone_comercial.ddd, pessoas[i].telefone_comercial.numero_telefone, pessoas[i].telefone.ddd, pessoas[i].telefone.numero_telefone);
		printf("Data de Nascimento: %d/%d/%d, Data de Ingresso: %d/%d/%d\n\n", pessoas[i].data_nascimento.dia, pessoas[i].data_nascimento.mes, pessoas[i].data_nascimento.ano, pessoas[i].data_ingresso.dia, pessoas[i].data_ingresso.mes, pessoas[i].data_ingresso.ano);
	}

	imprimeop(pessoas);
}


void listar1990(Cadastro *pessoas)
{
	for (int i = 0; i < 5; ++i)
	{
		if (pessoas[i].data_nascimento.ano > 1990)
		{
			
		printf("Nome: %s, Sexo: %c, Estado Civil: %s, Identidade(RG): %s,\n", pessoas[i].nome, pessoas[i].sexo, pessoas[i].estado_civil, pessoas[i].identidade);
		printf("CPF: %s, Salário: %.2lf, Endereço Comercial- Rua: %s, Numero: %d, Complemento: %s, CEP: %d,\n", pessoas[i].cpf, pessoas[i].salario, pessoas[i].endereco_comercial.rua, pessoas[i].endereco_comercial.numero, pessoas[i].endereco_comercial.complemento, pessoas[i].endereco_comercial.cep);
		printf("Endereço Comercial - Cidade: %s, Estado: %s, Endereço Residencial - Rua: %s, Numero: %d, Complemento: %s, CEP: %d,\n", pessoas[i].endereco_comercial.cidade, pessoas[i].endereco_comercial.estado, pessoas[i].endereco_residencial.rua, pessoas[i].endereco_residencial.numero, pessoas[i].endereco_residencial.complemento, pessoas[i].endereco_residencial.cep);
		printf("Endereço Residencial - Cidade: %s, Estado: %s, Telefone Comercial: (%d)%d, Telefone Pessoal: (%d)%d,\n", pessoas[i].endereco_residencial.cidade, pessoas[i].endereco_residencial.estado, pessoas[i].telefone_comercial.ddd, pessoas[i].telefone_comercial.numero_telefone, pessoas[i].telefone.ddd, pessoas[i].telefone.numero_telefone);
		printf("Data de Nascimento: %d/%d/%d, Data de Ingresso: %d/%d/%d\n\n", pessoas[i].data_nascimento.dia, pessoas[i].data_nascimento.mes, pessoas[i].data_nascimento.ano, pessoas[i].data_ingresso.dia, pessoas[i].data_ingresso.mes, pessoas[i].data_ingresso.ano);
		
		}
	}

	imprimeop(pessoas);
}


void copiadados(Cadastro *pessoas)
{
	int op = 0;
	int op1 = 0;
	
	printf("Entre com a posiçao no vetor que sera copiada(0-4): ");
	scanf("%d", &op);
	printf("Entre com a posiçao no vetor que sera sobreescrita pela copia(0-4): ");
	scanf("%d", &op1);

	pessoas[op1] = pessoas[op];

	printf("\n");
	imprimeop(pessoas);
}


void cadastraruser(Cadastro *pessoas)
{
	int op = 0;
	printf("Entre com a posiçao no vetor para o cadastro(0-4): ");
	scanf("%d", &op);
	printf("\n");

	if ((op < 5) && (op >= 0))
	{
		getchar();
		printf("Digite o nome: ");
		fgets(pessoas[op].nome, 49, stdin);
		pessoas[op].nome[strcspn(pessoas[op].nome, "\n")] = '\0';

		printf("\nDigite o sexo(H ou M): ");
		scanf("%c", &pessoas[op].sexo);
		getchar();

		printf("\nDigite o Estado Civil: ");
		fgets(pessoas[op].estado_civil, 30, stdin);
		pessoas[op].estado_civil[strcspn(pessoas[op].estado_civil, "\n")] = '\0';

		printf("\nDigite a Identidade(RG): ");
		fgets(pessoas[op].identidade, 12, stdin);
		pessoas[op].identidade[strcspn(pessoas[op].identidade, "\n")] = '\0';

		printf("\nDigite o CPF: ");
		fgets(pessoas[op].cpf, 13, stdin);
		pessoas[op].cpf[strcspn(pessoas[op].cpf, "\n")] = '\0';

		printf("\nDigite o Sálario: ");
		scanf("%lf", &pessoas[op].salario);
		getchar();

		printf("\nDigite o Endereço Comercial(Rua): ");
		fgets(pessoas[op].endereco_comercial.rua, 50, stdin);
		pessoas[op].endereco_comercial.rua[strcspn(pessoas[op].endereco_comercial.rua, "\n")] = '\0';

		printf("\nDigite o Endereço Comercial(Numero): ");
		scanf("%d", &pessoas[op].endereco_comercial.numero);
		getchar();

		printf("\nDigite o Endereço Comercial(Complemento): ");
		fgets(pessoas[op].endereco_comercial.complemento, 30, stdin);
		pessoas[op].endereco_comercial.complemento[strcspn(pessoas[op].endereco_comercial.complemento, "\n")] = '\0';

		printf("\nDigite o Endereço Comercial(Cidade): ");
		fgets(pessoas[op].endereco_comercial.cidade, 30, stdin);
		pessoas[op].endereco_comercial.cidade[strcspn(pessoas[op].endereco_comercial.cidade, "\n")] = '\0';

		printf("\nDigite o Endereço Comercial(Estado - Sigla): ");
		fgets(pessoas[op].endereco_comercial.estado, 4, stdin);
		pessoas[op].endereco_comercial.estado[strcspn(pessoas[op].endereco_comercial.estado, "\n")] = '\0';

		printf("\nDigite o Endereço Residencial(Rua): ");
		fgets(pessoas[op].endereco_residencial.rua, 50, stdin);
		pessoas[op].endereco_residencial.rua[strcspn(pessoas[op].endereco_residencial.rua, "\n")] = '\0';

		printf("\nDigite o Endereço Residencial(Numero): ");
		scanf("%d", &pessoas[op].endereco_residencial.numero);
		getchar();

		printf("\nDigite o Endereço Residencial(Complemento): ");
		fgets(pessoas[op].endereco_residencial.complemento, 30, stdin);
		pessoas[op].endereco_residencial.complemento[strcspn(pessoas[op].endereco_residencial.complemento, "\n")] = '\0';

		printf("\nDigite o Endereço Residencial(Cidade): ");
		fgets(pessoas[op].endereco_residencial.cidade, 30, stdin);
		pessoas[op].endereco_residencial.cidade[strcspn(pessoas[op].endereco_residencial.cidade, "\n")] = '\0';

		printf("\nDigite o Endereço Residencial(Estado - Sigla):");
		fgets(pessoas[op].endereco_residencial.estado, 4, stdin);
		pessoas[op].endereco_residencial.estado[strcspn(pessoas[op].endereco_residencial.estado, "\n")] = '\0';
 	
		printf("\nDigite o Telefone Comercial(ddd numero do telefone): ");
		scanf("%d %d", &pessoas[op].telefone_comercial.ddd, &pessoas[op].telefone_comercial.numero_telefone);
		getchar();

		printf("\nDigite o Telefone Pessoal(ddd numero do telefone): ");
		scanf("%d %d", &pessoas[op].telefone.ddd, &pessoas[op].telefone.numero_telefone);
		getchar();

		printf("\nDigite a data de Nascimento(dd mm aaa): ");
		scanf("%d %d %d", &pessoas[op].data_nascimento.dia, &pessoas[op].data_nascimento.mes, &pessoas[op].data_nascimento.ano);
		getchar();

		printf("\nDigite a data de Ingresso(dd mm aaa): ");
		scanf("%d %d %d", &pessoas[op].data_ingresso.dia, &pessoas[op].data_ingresso.mes, &pessoas[op].data_ingresso.ano);
		getchar();

		setbuf(stdin, NULL);
		imprimeop(pessoas);
	}
	else
	{
		printf("Valor Invalido\n");
		imprimeop(pessoas);
	}
}


void imprimeop(Cadastro *pessoas)
{
	int op = 0;
	printf("\n<< Cadastro >>\n\n");
	printf("Escolha uma opção:\n");
	printf("1- Listar todos os cadastros\n");
	printf("2- Cadastrar/Sobreescrever nova pessoa\n");
	printf("3- Listar pessoas que nasceram depois de 1990\n");
	printf("4- Copiar dados de um cadastro para outro\n");
	printf("5- Sair\n");
	scanf("%d", &op);
	printf("\n");
 
	if (op == 1)
	{
		listarcad(pessoas);
	}
	else if (op == 2)
	{
		cadastraruser(pessoas);
	}
	else if (op == 3)
	{
		listar1990(pessoas);
	}
	else if (op == 4)
	{
		copiadados(pessoas);
	}
	else if (op == 5)
	{
		return;
	}
	else
	{
		printf("Valor digitado nao valido\n");
		imprimeop(pessoas);
	}

}




int main()
{
	Cadastro pessoas[5];
	Cadastro *ppessoas;

	ppessoas = pessoas;

	strcpy(pessoas[0].nome, "Joaquina da silva");
	strcpy(pessoas[1].nome, "Jorge aroldo");
	strcpy(pessoas[2].nome, "Pericles Afonso");
	strcpy(pessoas[3].nome, "Cristina Maria");
	strcpy(pessoas[4].nome, "Martin alvez");

	pessoas[0].sexo = 'M';
	pessoas[1].sexo = 'H';
	pessoas[2].sexo = 'H';
	pessoas[3].sexo ='M';
	pessoas[4].sexo = 'H';

	strcpy(pessoas[0].estado_civil, "Solteiro(a)");
	strcpy(pessoas[1].estado_civil, "Casado(a)");
	strcpy(pessoas[2].estado_civil, "Divorciado(a)");
	strcpy(pessoas[3].estado_civil, "Casado(a)");
	strcpy(pessoas[4].estado_civil, "Solteiro(a)");

	strcpy(pessoas[0].identidade, "MG32415978");
	strcpy(pessoas[1].identidade, "SP45187798");
	strcpy(pessoas[2].identidade, "RS17453298");
	strcpy(pessoas[3].identidade, "MG78465213");
	strcpy(pessoas[4].identidade, "PR74613528");

	strcpy(pessoas[0].cpf, "14527894147");
	strcpy(pessoas[1].cpf, "32154167801");
	strcpy(pessoas[2].cpf, "03417598645");
	strcpy(pessoas[3].cpf, "34788964513");
	strcpy(pessoas[4].cpf, "87544469814");

	pessoas[0].salario = 2500;
	pessoas[1].salario = 2300;
	pessoas[2].salario = 5500;
	pessoas[3].salario = 3256.5;
	pessoas[4].salario = 2000;

	strcpy(pessoas[0].endereco_comercial.rua, "Rondon Pacheco");
	strcpy(pessoas[1].endereco_comercial.rua, "Avenida Brasil");
	strcpy(pessoas[2].endereco_comercial.rua, "João Naves de Avila");
	strcpy(pessoas[3].endereco_comercial.rua, "Quintino Bocaiuva");
	strcpy(pessoas[4].endereco_comercial.rua, "Geraldo Cunha");

	strcpy(pessoas[0].endereco_comercial.cidade, "Uberlandia");
	strcpy(pessoas[1].endereco_comercial.cidade, "Uberlandia");
	strcpy(pessoas[2].endereco_comercial.cidade, "Uberlandia");
	strcpy(pessoas[3].endereco_comercial.cidade, "Uberlandia");
	strcpy(pessoas[4].endereco_comercial.cidade, "Uberlandia");

	strcpy(pessoas[0].endereco_comercial.estado, "MG");
	strcpy(pessoas[1].endereco_comercial.estado, "MG");
	strcpy(pessoas[2].endereco_comercial.estado, "MG");
	strcpy(pessoas[3].endereco_comercial.estado, "MG");
	strcpy(pessoas[4].endereco_comercial.estado, "MG");

	strcpy(pessoas[0].endereco_comercial.complemento, "Sem complemento");
	strcpy(pessoas[1].endereco_comercial.complemento, "Bloco A");
	strcpy(pessoas[2].endereco_comercial.complemento, "Sem complemento");
	strcpy(pessoas[3].endereco_comercial.complemento, "Casa 2");
	strcpy(pessoas[4].endereco_comercial.complemento, "Bloco C");

	pessoas[0].endereco_comercial.numero = 374;
	pessoas[1].endereco_comercial.numero = 2013;
	pessoas[2].endereco_comercial.numero = 152;
	pessoas[3].endereco_comercial.numero = 987;
	pessoas[4].endereco_comercial.numero = 1745;

	pessoas[0].endereco_comercial.cep = 38451789;
	pessoas[1].endereco_comercial.cep = 34714528;
	pessoas[2].endereco_comercial.cep = 31205769;
	pessoas[3].endereco_comercial.cep = 35978145;
	pessoas[4].endereco_comercial.cep = 38451526;

	strcpy(pessoas[0].endereco_residencial.rua, "Nego Amancio");
	strcpy(pessoas[1].endereco_residencial.rua, "Boa Vista");
	strcpy(pessoas[2].endereco_residencial.rua, "João Naves de Avila");
	strcpy(pessoas[3].endereco_residencial.rua, "Pedro Algusto");
	strcpy(pessoas[4].endereco_residencial.rua, "Maria Aparecida");

	strcpy(pessoas[0].endereco_residencial.cidade, "Uberlandia");
	strcpy(pessoas[1].endereco_residencial.cidade, "Prata");
	strcpy(pessoas[2].endereco_residencial.cidade, "Uberlandia");
	strcpy(pessoas[3].endereco_residencial.cidade, "Araguari");
	strcpy(pessoas[4].endereco_residencial.cidade, "Uberlandia");

	strcpy(pessoas[0].endereco_residencial.estado, "MG");
	strcpy(pessoas[1].endereco_residencial.estado, "MG");
	strcpy(pessoas[2].endereco_residencial.estado, "MG");
	strcpy(pessoas[3].endereco_residencial.estado, "MG");
	strcpy(pessoas[4].endereco_residencial.estado, "MG");

	strcpy(pessoas[0].endereco_residencial.complemento, "Sem complemento");
	strcpy(pessoas[1].endereco_residencial.complemento, "Sem complemento");
	strcpy(pessoas[2].endereco_residencial.complemento, "Bloco D");
	strcpy(pessoas[3].endereco_residencial.complemento, "Casa 1");
	strcpy(pessoas[4].endereco_residencial.complemento, "Bloco C");

	pessoas[0].endereco_residencial.numero = 365;
	pessoas[1].endereco_residencial.numero = 450;
	pessoas[2].endereco_residencial.numero = 410;
	pessoas[3].endereco_residencial.numero = 780;
	pessoas[4].endereco_residencial.numero = 985;

	pessoas[0].endereco_residencial.cep = 38415123;
	pessoas[1].endereco_residencial.cep = 78414952;
	pessoas[2].endereco_residencial.cep = 64515978;
	pessoas[3].endereco_residencial.cep = 30214478;
	pessoas[4].endereco_residencial.cep = 41578023;

	pessoas[0].telefone.ddd = 34;
	pessoas[1].telefone.ddd = 34;
	pessoas[2].telefone.ddd = 34;
	pessoas[3].telefone.ddd = 34;
	pessoas[4].telefone.ddd = 34;

	pessoas[0].telefone.numero_telefone = 987875114;
	pessoas[1].telefone.numero_telefone = 978564531;
	pessoas[2].telefone.numero_telefone = 978523641;
	pessoas[3].telefone.numero_telefone = 978546123;
	pessoas[4].telefone.numero_telefone = 988874563;

	pessoas[0].telefone_comercial.ddd = 34;
	pessoas[1].telefone_comercial.ddd = 34;
	pessoas[2].telefone_comercial.ddd = 34;
	pessoas[3].telefone_comercial.ddd = 34;
	pessoas[4].telefone_comercial.ddd = 34;

	pessoas[0].telefone_comercial.numero_telefone = 987875114;
	pessoas[1].telefone_comercial.numero_telefone = 978564531;
	pessoas[2].telefone_comercial.numero_telefone = 978523641;
	pessoas[3].telefone_comercial.numero_telefone = 978546123;
	pessoas[4].telefone_comercial.numero_telefone = 988874563;

	pessoas[0].data_nascimento.dia = 25;
	pessoas[1].data_nascimento.dia = 12;
	pessoas[2].data_nascimento.dia = 15;
	pessoas[3].data_nascimento.dia = 04;
	pessoas[4].data_nascimento.dia = 21;

	pessoas[0].data_nascimento.mes = 04;
	pessoas[1].data_nascimento.mes = 02;
	pessoas[2].data_nascimento.mes = 06;
	pessoas[3].data_nascimento.mes = 11;
	pessoas[4].data_nascimento.mes = 01;

	pessoas[0].data_nascimento.ano = 1995;
	pessoas[1].data_nascimento.ano = 1988;
	pessoas[2].data_nascimento.ano = 1993;
	pessoas[3].data_nascimento.ano = 1989;
	pessoas[4].data_nascimento.ano = 1990;

	pessoas[0].data_ingresso.dia = 11;
	pessoas[1].data_ingresso.dia = 07;
	pessoas[2].data_ingresso.dia = 06;
	pessoas[3].data_ingresso.dia = 10;
	pessoas[4].data_ingresso.dia = 12;

	pessoas[0].data_ingresso.mes = 05;
	pessoas[1].data_ingresso.mes = 05;
	pessoas[2].data_ingresso.mes = 06;
	pessoas[3].data_ingresso.mes = 06;
	pessoas[4].data_ingresso.mes = 06;

	pessoas[0].data_ingresso.ano = 2010;
	pessoas[1].data_ingresso.ano = 2008;
	pessoas[2].data_ingresso.ano = 2004;
	pessoas[3].data_ingresso.ano = 2010;
	pessoas[4].data_ingresso.ano = 2012;

	imprimeop(ppessoas);

	return 0;
}