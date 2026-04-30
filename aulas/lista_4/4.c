#include <stdio.h>

int main() {
    int a, b, c;
    int temp;
    
    printf("Digite três números inteiros:\n");
    printf("Primeiro número: ");
    scanf("%d", &a);
    printf("Segundo número: ");
    scanf("%d", &b);
    printf("Terceiro número: ");
    scanf("%d", &c);
    
    printf("\nNúmeros originais: %d, %d, %d\n", a, b, c);
        
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    
    printf("Números ordenados (crescente): %d, %d, %d\n", a, b, c);
    
    return 0;
}