#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	
	int meses;
	char resp[5], checkGastos[5];
    
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    printf("Tem gastos para adicionar?\n");
    printf("Digite \"Sim\" ou \"Não\".");
    fgets(checkGastos, 5, stdin);
	getchar();
	system("cls");
    

	printf("%s\n", checkGastos);
    if (strcmp(checkGastos, "Sim") == 0 && strcmp(checkGastos, "sim") == 0) {
    	printf("Digite o número de meses que deseja adicionar: ");
    	scanf("%d", &meses);
    	getchar();
		while (meses > 12) {
    		printf("O número máximo de meses que o sistema suporta é apenas 12.\n\nPor favor, digite novamente.\n");
    		printf("\nDigite o número de meses que deseja adicionar: ");
    		scanf("%d", &meses);
		}
    	
    	char gastos[meses][20];
    	int gasto[meses];
    	
    	for(int i = 0; i < meses; i++) {
			int mark = 0;
			printf("Tipo de gasto - %d°: ", i+1);
			fgets(gastos[mark][i], 20, stdin);
			while(strcmp(resp, "Sim") && strcmp(resp, "sim")){
				printf("Valor: ");
				scanf("%d", &gasto[i]);
				// Descarta o caractere de nova linha deixado na entrada
				getchar();

				mark++;
			}
		}
		
		// Exibe os dados armazenados
		printf("\nDados dos gastos:\n\n");
		for(int i = 0; i < meses; i++) {
			printf("Gasto - %d:\n\n", i+1);
			printf("Tipo: %s", gastos[i]);
			printf("Mês 1: %d\n", gasto[i]);
			printf("\n");
		}
	} else {
		printf("EM DESENVOLVIMENTO!");
	}
	return 0;
}