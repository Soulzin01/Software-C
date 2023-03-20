#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	int y, x;
    
    setlocale(LC_ALL, "Portuguese_Brazil");
    
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
    	int mes1[x], mes2[x];
    	
    	for(int i = 0; i < x; i++) {
    		printf("Tipo de gasto - %d°: ", i+1);
    		fgets(gastos[i], 50, stdin);
    		
    		printf("Valor no mês 1: ");
    		scanf("%d", &mes1[i]);
    		
    		printf("Valor no mês 2: ");
    		scanf("%d", &mes2[i]);
    		
    		// Descarta o caractere de nova linha deixado na entrada
    		getchar();
    		
    		system("cls");
		}
		
		// Exibe os dados armazenados
		printf("\nDados dos gastos:\n\n");
		for(int i = 0; i < x; i++) {
			printf("Gasto - %d:\n\n", i+1);
			printf("Tipo: %s", gastos[i]);
			printf("Mês 1: %d\n", mes1[i]);
			printf("Mês 2: %d\n", mes2[i]);
			printf("\n");
		}
	} else {
		printf("EM DESENVOLVIMENTO!");
	}
    
	return 0;
}