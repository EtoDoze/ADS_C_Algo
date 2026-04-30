#include <stdio.h>

int main() {
    float lado1, lado2, lado3;
    
    printf("Digite o comprimento do primeiro segmento: ");
    scanf("%f", &lado1);
    printf("Digite o comprimento do segundo segmento: ");
    scanf("%f", &lado2);
    printf("Digite o comprimento do terceiro segmento: ");
    scanf("%f", &lado3);
    
    printf("\n");
    
    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        if (lado1 == lado2 && lado2 == lado3) {
            printf("Os segmentos FORMAM um triângulo EQUILÁTERO\n");
        }
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("Os segmentos FORMAM um triângulo ISÓSCELES\n");
        }
        else {
            printf("Os segmentos FORMAM um triângulo ESCALENO\n");
        }
    }
    else {
        printf("Os segmentos NÃO FORMAM um triângulo\n");
    }
    
    return 0;
}