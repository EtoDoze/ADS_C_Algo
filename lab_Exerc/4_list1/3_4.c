#include <stdio.h>

//mostre na tela um menu de pratos, pelo menos 5 pratos, associados a um numero prato1 - miojo, prato 2 - ensopado

int main(){

    rodando:

    
    int prato;
    printf("\nMenu\n1 - Miojo\n2 - Ensopado\n3 - Macarrão\n4 - Arroz\n5 - Feijoada\n");
    scanf("%d", &prato);

    switch (prato)
    {
    case 1:
        printf("\nMiojo, macarrao instantaneo\n");
        goto rodando;
        break;
        
    case 2:
        printf("\nEnsopado de carne\n");
        goto rodando;
        break;
    case 3:
        printf("\nMacarao italiano\n");
        goto rodando;
        break;
    case 4:
        printf("\nArroz natural da fazenda\n");
        goto rodando;
        break;
    case 5:
        printf("\nFeijoada com feijões naturais e colhidos ontem\n");
        goto rodando;
        break;
    
    default:
        printf("\nPrato nn escolhido \n");
        break;
    }

}