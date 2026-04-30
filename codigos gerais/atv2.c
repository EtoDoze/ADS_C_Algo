//2 doubles e multiplicação de 2 numeros

#include <stdio.h>

int main(){
    double a,b;
    double soma,menos,dividir,multiplicacao;

    printf("Digite os numeros a e b:\n");
    scanf("%lf", &a);
    scanf("%lf", &b);

    soma= a+b;
    menos=a-b;
    dividir = a/b;
    multiplicacao = a*b;

    printf("Soma: %.2lf \n", soma);
    printf("menos: %.2lf \n", menos);
    printf("divisao: %.2lf \n", dividir);
    printf("multiplicacao: %.2lf \n", multiplicacao);
}