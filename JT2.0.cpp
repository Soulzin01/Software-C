#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	int y, x;
	char nome[50];
	int idade;
	float renda, result;
    
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    printf("Bem Vindo ao Gerenciador de Renda!\n");
    
    printf("Preencha com seus dados\n");
    
    printf("Nome: ");
    fgets(nome,50,stdin);
    printf("Idade: ");
    scanf("%d", &idade);
    printf("Renda Mensal: ");
    scanf("%f", &renda);
    
    printf("Tem gastos para adicionar?\n");
    printf("\nDigite -> 1 para SIM\t\t0 para NÃO: ");
    scanf("%d", &y);
    
    system("cls");

    if (y == 1) {
    	printf("Digite o número de gastos que deseja adicionar: ");
    	scanf("%d", &x);
    	
    	system("cls");
    	
    	while (x > 10) {
    		printf("O número máximo de gastos é apenas 10!\n\n");
    		printf("Por favor digite novamente.\n");
    		printf("\nDigite o número de gastos que deseja adicionar: ");
    		scanf("%d", &x);
		}
		
    	// Descarta o caractere de nova linha deixado na entrada
    	getchar();
    	
    	char gastos[x][50];
    	float mes1[x], mes2[x];
    	
    	for(int i = 0; i < x; i++) {
    		printf("Tipo de gasto - %d°: ", i+1);
    		fgets(gastos[i], 50, stdin);
    		
    		printf("Valor no mês 1: ");
    		scanf("%f", &mes1[i]);
    		
    		printf("Valor no mês 2: ");
    		scanf("%f", &mes2[i]);
    		
    		// Descarta o caractere de nova linha deixado na entrada
    		getchar();
    		
    		system("cls");
		}
		
		// Exibe os dados armazenados
		printf("\nDados dos gastos:\n\n");
		for(int i = 0; i < x; i++) {
			printf("Gasto - %d:\n\n", i+1);
			printf("Tipo: %s", gastos[i]);
			printf("Mês 1: %.2f\n", mes1[i]);
			printf("Mês 2: %.2f\n", mes2[i]);
			printf("\n");
			result += mes1[i] + mes2[i];
		}
		printf("Renda: %.2f\n", renda);
		renda = renda * 2;
		printf("Renda nos 2 meses: %.2f\n", renda);
		renda = renda - result;
		printf("Sobra da renda: %.2f", renda);
		
	} else {
		printf("Nome: %s\n", nome);
		printf("Idade: %d\n", idade);
		printf("Renda: %.3f\n", renda);
	}
    
	return 0;
}

