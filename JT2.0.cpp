#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

	int y, x, idade;
	char nome[256];
	float renda, result;

	setlocale(LC_ALL, "Portuguese_Brazil"); // Configuração de idioma - Compatibilidade com UTF-8

	printf("Bem Vindo ao Gerenciador de Renda!\n\n");

	printf("Preencha com seus dados\n");

	printf("Nome: ");
	fgets(nome, 256, stdin);
	printf("Idade: ");
	scanf("%d", &idade);
	printf("Renda Mensal: ");
	scanf("%f", &renda); // Configuração inicial do usuário

	printf("\nTem gastos para adicionar?\n");
	printf("\nDigite -> 1 para SIM\t\t0 para NÃO: ");
	scanf("%d", &y);

	system("cls"); // Limpeza da tela

	if (y == 1)
	{
		printf("Ótimo!\n\n");
		printf("Digite o número de gastos que deseja adicionar: ");
		scanf("%d", &x); // Leitura do número de gastos

		system("cls");

		while (x > 10)
		{
			printf("O número máximo de gastos é apenas 10!\n\n");
			printf("Por favor digite novamente.\n");
			printf("\nDigite o número de gastos que deseja adicionar: ");
			scanf("%d", &x);
		}

		// Descarta o caractere de nova linha deixado na entrada
		getchar();

		char gastos[x][50];
		float mes[x];

		for (int i = 0; i < x; i++)
		{
			printf("Tipo de gasto - %d°: ", i + 1);
			fgets(gastos[i], 50, stdin);

			printf("Valor no mês: ");
			scanf("%f", &mes[i]);

			// Descarta o caractere de nova linha deixado na entrada
			getchar();

			system("cls");
		}

		// Exibe os dados armazenados
		printf("\nDados dos gastos:\n\n");
		for (int i = 0; i < x; i++)
		{
			printf("Gasto - %d:\n\n", i + 1);
			printf("Tipo: %s", gastos[i]);
			printf("Gasto no Mês: R$%.2f\n", mes[i]);
			printf("\n");
			result += mes[i]; // Soma do gasto total
		}

		printf("--------------------------------\n\n");
		printf("***Extrato***\n\n");
		printf("Renda mensal: R$%.2f\n", renda);
		printf("Soma dos gastos e meses: R$%.2f\n", result);
		renda = renda - result;
		printf("saldo restante: R$%.2f\n", renda);

		if (renda < 200)
		{
			printf("\nSua renda final está abaixo de R$200.00, é recomendado reduzir os gastos mensais..");
		}
	}
	else
	{
		printf("Nome: %s", nome);
		printf("Idade: %d\n", idade);
		printf("Renda: %.2f\n", renda);
		printf("\nPara novo acesso abra novamente o programa.");
	}

	return 0;
}
