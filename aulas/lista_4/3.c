#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;
    
    printf("Cálculo das raízes de uma equação do segundo grau\n");
    printf("Formato: ax² + bx + c = 0\n\n");
    
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    
    printf("\nEquação: %.2fx² + %.2fx + %.2f = 0\n", a, b, c);
    
    if (a == 0) {
        printf("ERRO: Isso não é uma equação do segundo grau (a não pode ser zero)\n");
    }
    else {
        delta = b*b - 4*a*c;
        
        printf("Delta = %.2f\n", delta);
        
        if (delta < 0) {
            printf("A equação NÃO possui raízes reais (delta negativo)\n");
        }
        else if (delta == 0) {
            x1 = -b / (2*a);
            printf("A equação possui uma raiz real (raiz dupla):\n");
            printf("x = %.2f\n", x1);
        }
        else {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("A equação possui duas raízes reais distintas:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }
    
    return 0;
}