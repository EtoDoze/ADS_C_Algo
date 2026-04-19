/*Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendida respectivamente
 por 10, 12 e 15 reais. Construa um algoritmo em que o usuário forneça a quantidade de camisetas pequenas, médias
  e grandes referentes a uma venda, e a máquina informe quanto será o valor arrecadado.*/
#include <stdio.h>

int main(){
    int C_grande;
    int C_pequena;
    int C_media;

    printf("Camisas pequenas:");
    scanf("%d", &C_pequena);
    printf("Camisas medias:");
    scanf("%d", &C_media);
    printf("Camisas grandes:");
    scanf("%d", &C_grande);

    printf("O valor arecadado sera de %d reais", (C_pequena * 10 + C_media * 12 + C_grande * 15));
}