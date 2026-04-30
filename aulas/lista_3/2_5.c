#include <stdio.h>

int main() {
    /* Este programa calcula o produto de tres numeros inteiros */
    
    int x, y, z, resultado;
    
    printf("Digite tres numeros inteiros: ");
    scanf("%d%d%d", &x, &y, &z);
    
    resultado = x * y * z;
    
    printf("O produto e %d\n", resultado);
    
    return 0;
}