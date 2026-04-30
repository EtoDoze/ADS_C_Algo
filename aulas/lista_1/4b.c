#include <stdio.h>

int main() {
    int fahrenheit;
    double celsius;
    
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%d", &fahrenheit);
    
    celsius = (fahrenheit - 32) * (5.0 / 9.0);
    
    printf("\n%d°F equivale a %.2f°C\n", fahrenheit, celsius);
    
    return 0;
}