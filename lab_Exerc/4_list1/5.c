#include <stdio.h>

int main(){

programa:
    float Valor1;
    float Valor2;
    char operador;

    printf("Valor 1:\n");
    scanf("%f", &Valor1);

    printf("Valor 2:\n");
    scanf("%f", &Valor2);

    printf("Operador (+, -, *, /):\n");
    scanf(" %c", &operador);

    switch (operador)
    {
    case '+':
        printf("\nsoma: %2.f\n", (Valor1+ Valor2));
        goto programa;
        break;
    case '-':
        printf("\nsubtração: %2.f\n", (Valor1- Valor2));
        goto programa;
        break;
    case '*':
        printf("\nmultiplicação: %2.f\n", (Valor1 * Valor2));
        goto programa;
        break;
    case '/':
        printf("\ndivisão: %2.f\n", (Valor1 / Valor2));
        goto programa;
        break;
    
    default:
        printf("\n Erro\n");
        break;
    }

    return 0;
}