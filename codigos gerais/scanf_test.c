#include <stdio.h>


int main(){
    char nome[10];
    int idade;

    printf("Insira seu nome:");
    scanf("%s",nome);

    printf("Insira sua idade:");
    scanf("%d",&idade);
    
    printf("seu nome é %s e sua idade é %d", nome, idade);

}