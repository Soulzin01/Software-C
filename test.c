#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char resp[2];
    fgets(resp, 2, stdin);
    for(int i = 0; i < strlen(resp); i++){
        printf("%c\n", resp[i]);
    }
    if(strcmp(resp, "Sim") == 0 || strcmp(resp, "sim") == 0){
        printf("É sal");
    }else{
        printf("É salada");
    }

    return 0;
}
