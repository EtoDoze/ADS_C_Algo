#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    printf("Digite o segundo número: ");
    scanf("%lf", &num2);
    
    printf("\nRESULTADOS:\n");
    printf("===========\n\n");
    
    // a) Soma dos números
    printf("a) Soma: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    
    // b) Produto do primeiro pelo quadrado do segundo
    printf("b) Primeiro × (segundo²): %.2f × (%.2f²) = %.2f\n", num1, num2, num1 * pow(num2, 2));
    
    // c) Quadrado do primeiro número
    printf("c) Primeiro²: %.2f² = %.2f\n", num1, pow(num1, 2));
    
    // d) Raiz quadrada da soma dos quadrados
    double soma_quadrados = pow(num1, 2) + pow(num2, 2);
    printf("d) √(primeiro² + segundo²): √(%.2f) = %.2f\n", soma_quadrados, sqrt(soma_quadrados));
    
    // e) Seno da diferença do primeiro pelo segundo
    printf("e) Seno(primeiro - segundo): seno(%.2f) = %.2f\n", num1 - num2, sin(num1 - num2));
    
    return 0;
}