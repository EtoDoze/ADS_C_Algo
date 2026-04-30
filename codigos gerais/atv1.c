#include <stdio.h>

int main(){
    int valor1;
    int valor2;

    printf("Valor 1:");
    scanf("%d", &valor1);
    printf("Valor 2:");
    scanf("%d", &valor2);

    int soma = valor1 + valor2;
    printf("Sua soma é %d", soma);
}