#include <stdio.h>

int main() {
    double fahrenheit, celsius;
    
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &fahrenheit);
    
    celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
    
    printf("\n%.2f°F equivale a %.2f°C\n", fahrenheit, celsius);
    
    return 0;
}