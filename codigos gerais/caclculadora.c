#include <stdio.h>

int soma(int a, int b);
int sub(int a, int b);
int div(int a, int b);
int mult(int a, int b);

int main(){

    while(1){
        int soma1;
        int soma2;
        
        printf("\nEscolha o que você quer fazer:\n");
        printf("[1] Somar\n[2] Subtrair\n[3] Dividir\n[4] Multiplicar\n");

        
        
        int choice;
        scanf("%d", &choice);
        
        printf("\n \nvalor 1:");
        scanf("%d", &soma1);
        printf("valor 2:");
        scanf("%d", &soma2);

        switch (choice){
        case 1:
            printf("\n resultado: %d", soma(soma1,soma2));
            break;
        case 2:
            printf("\n resultado: %d", sub(soma1,soma2));
            break;
        case 3:
            printf("\n resultado: %d", div(soma1,soma2));
            break;
        case 4:
            printf("\n resultado: %d", mult(soma1,soma2));
            break;
        default:
            printf("Erro");
            break;}

        printf(" \n \n Quer continuar:");
        printf("\n [1]Fechar \n [2]cotinuar");
        int choice2;
        scanf("%d", &choice2);

        if (choice2 == 1)
        {
            break;
        }
        
    
    }

    return 0;
}

    int soma(int a,int b){
        return a + b;
    }

    int sub(int a,int b){
        return a - b;
    }

    int div(int a, int b){
        return a/b;
    }

    int mult(int a, int b){
        return a * b;
    }